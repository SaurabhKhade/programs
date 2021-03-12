#include<stdio.h>

void toh(char src,char dest, char aux, int disks){
    if(disks==0){
        return;
    }
    else{
        toh(src,aux,dest,disks-1);
        printf("Move disk from '%c' to '%c'\n",src,dest);
        toh(aux,dest,src,disks-1);
    }
}

int main(){
    printf("Enter total no. of disks: ");
    int disks;
    scanf("%d",&disks);
    printf("\nMoving Disks from Tower 'A' to Tower 'C' with the help of auxillary Tower 'B'\n\n");
    toh('A','C','B',disks);
}