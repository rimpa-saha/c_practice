//Write a program in C to read 10 numbers from the keyboard and find their sum and average.Test data: input the 10 numbers:
#include<stdio.h>
int main(){
    int i,n,sum=0;
    float avg;
    printf("input the 10 numbers:\n");
    for(int i=1;i<=10;i++){
        printf("number-%d ",i);
        scanf("%d",&n);
        sum=sum+n;
    }
    
    avg=sum/10.0;
    printf("The sum of 10 no is:%d",sum);
    printf("\nthe average is:%f",avg);

    return 0;
}