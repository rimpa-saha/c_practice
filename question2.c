//2. Write a C program to compute the sum of the first 10 natural numbers.

#include<stdio.h>
int main(){
int i,sum =0;
 printf("the first 10 natural number is:\n ");
 for(int i=1;i<=10;i++){
    sum=sum+i;
    printf("%d ",i);
 }
printf("\nthe sum is:%d",sum);

    return 0;
}