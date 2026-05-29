#include<stdio.h>
int main(){
    int rev=0,n,f,temp;
    printf("enter the no:");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        f=n%10;
        rev=rev*10+f;
        n=n/10;
    }
    if(rev==temp){
        printf("the palindrome no is=%d",temp);
    }
    

    return 0;
}