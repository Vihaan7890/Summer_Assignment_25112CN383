#include<stdio.h>
int main(){
    int n,count=0,f;
    printf("enter no:");
    scanf("%d",&n);
    f=n;
    while(n>0){
        count++;
        n=n/10;
    }
    printf("the no of digits of no %d is-%d",f,count);
    return 0;
}