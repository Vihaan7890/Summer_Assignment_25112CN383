#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("enter the no :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("the factorial of no:%d is-%d",n,fact);
    return 0;
}