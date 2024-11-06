//. Write a program in C to display the cube of the number up to an integer. Test data: input the number of terms is 5.
#include<stdio.h>
int main(){
int i,n,cube;
printf("input the number of terms:");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    cube=(i*i*i);
    printf("\nnumber is:%d and cube of the %d is:%d",i,i,cube);
}
    return 0;

}