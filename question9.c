//9. Write a program in C to display a pattern like a right angle triangle using an asterisk.
//The pattern like :
//*
//**
//***
//****
#include<stdio.h>
int main(){
    int rows,i,j;
    printf("input the number of rows:");
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }

    return 0;
}