#include<stdio.h>
int main(){
    int n,i,flag=1;
    printf("enter the no:");
    scanf("%d",&n);
    if(n==1){
        printf("not prime");
        
    }
    else{
        for(i=2;i<=n/2;i++){
            if(n%i==0){
                flag=0;
                break;
            }

        }
    }
    if(flag==1){
        printf("it is prime");
    }
    else{
        printf("not prime");
    }
    return 0;

}