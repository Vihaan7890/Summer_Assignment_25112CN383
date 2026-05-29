#include<stdio.h>
int main(){
    int n,f,p=1;
    printf("enter the no:");
    scanf("%d",&n);
    while(n>0){
        f=n%10;
        p=p*f;
        n=n/10;
    }
    printf("the reverse no is:%d",p);
    return 0;
}