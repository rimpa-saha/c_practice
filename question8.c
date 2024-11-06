//Write a C program to display the n terms of odd natural numbers and their sum.test data:Input number of terms : 10
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("input the number of terms:");
    scanf("%d",&n);
    printf("\nthe odd numbers are:");
    for(i=1;i<=n;i++){
        printf("%d",2*i-1);
    }
    printf("\nthe sum of odd natural number upto %d terms:%d\n",n,sum);
    return 0;
}