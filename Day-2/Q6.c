#include<stdio.h>
int main(){
    int rev=0,n,f;
    printf("enter the no:");
    scanf("%d",&n);
    while(n>0){
        f=n%10;
        rev=rev*10+f;
        n=n/10;
    }
    printf("the reverse no is:%d",rev);
    return 0;
}