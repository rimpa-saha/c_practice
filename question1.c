#include<stdio.h>
int main(){
    int n;
printf("enter a number:");
scanf("%d",&n);
for(int i=2;i<=n-1;i=i+1){
    if(n%2==0){
        printf("the given nuber is composite");
        break;
    }
}

    return 0;
}