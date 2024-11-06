//Write a program in C to display the multiplication table for a given integer.Test data:Input the number (Table to be calculated) : 15
#include<stdio.h>
int main(){
int i,n,multiply;
printf("input the number :");
scanf("%d",&n);

for(int i=1;i<=10;i++){
    multiply=(i*n);
    printf("\n%d * %d = %d",n,i,multiply);
}
    return 0;

}