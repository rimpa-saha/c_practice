//Write a program in C to display n terms of natural numbers and their sum.Test data:7
#include<stdio.h>
int main(){
int i,n,sum =0;
printf("enter a number:");
scanf("%d",&n);
 printf("the first 7 natural numbers are:\n ");
 for(int i=1;i<=n;i++){
    sum=sum+i;
    printf("%d ",i);
 }
printf("\nthe sum is:%d",sum);

    return 0;
}