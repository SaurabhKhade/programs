/*
Name:Saurabh Shankar Khade,
Annasaheb Dange College of Engineering and Technology, Ashta,
At:Kagani     Post:Kalkundri
Tal:Chandagad
Dist:Kolhapur
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p,i,num,z,count,r=0;
    int q[3];
    int n;
    int a[n],b[n];
    printf("No.of pairs:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Pair No. %d ",i+1);
        scanf("%d %d",&a[i],&b[i]);
    }
    for(z=0;z<n;z++)
    {
        count=0;
        for(i=a[z];i<=b[z];i++)
        {
            r=0;
            num=i;
            while(num!=0)
            {
                p=num%10;
                num=num/10;
                q[r]=p;
                r++;
            }
            if(q[0]!=q[1] && q[0]!=q[2] && q[1]!=q[2])
            {
                count++;
            } 
        }
        printf("Count of numbers with unique digit between %d and %d is ",a[z],b[z]);
        printf("%d\n",count);   
     }
}
