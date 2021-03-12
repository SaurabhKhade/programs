#include<iostream>
using namespace std;
int main()
{
	int seat,nextSeat,divisor,reminder,test;
	string seatType;
	cin>>test;
	while(test--)
	{
		cin>>seat;
		int i=0;
		while(true)
		{
			int temp=i*12;
			if((seat==1+temp)||(seat==12+temp)||(seat==6+temp)||(seat==7+temp))
			{
				seatType="WS";
				break;
			}
			else if((seat==2+temp)||(seat==11+temp)||(seat==5+temp)||(seat==8+temp))
			{
				seatType="MS";
				break;
			}
			else if((seat==4+temp)||(seat==9+temp)||(seat==10+temp)||(seat==3+temp))
			{
				seatType="AS";
				break;
			}
			i++;
		}
		divisor=seat/12;
		reminder=seat%12;
		if(reminder==0)
		{
			nextSeat=12*(divisor-1)+1;
		}
		else
		{
			nextSeat=12*(divisor+1)+1-reminder;
		}
		cout<<nextSeat<<" "<<seatType<<endl;
	}
}