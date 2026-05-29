#include<stdio.h>
int main(){
    int s=0,n,f,m;
    printf("enter the no:");
    scanf("%d",&n);
    m=n;
    while(n>0){
        f=n%10;
        s=s+f;
        n=n/10;
    }
    printf("the sum of digits of no %d is-%d",m,s);
    return 0;
}