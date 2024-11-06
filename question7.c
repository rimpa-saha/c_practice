//Write a program in C to display the multiplier table vertically from 1 to n.Test data:Input upto the table number starting from 1 : 8
#include<stdio.h>
int main(){
int i,n,j;
printf("input upto the table number starting from 1:");
scanf("%d",&n);
printf("multiplication table from 1 to %d\n",n);

for(int i=1;i<=10;i++){
    for(int j=1;j<=n;j++){
        printf("%d*%d=%d,\n ",j,i,i*j);
    }
    
}

   
    return 0;

}