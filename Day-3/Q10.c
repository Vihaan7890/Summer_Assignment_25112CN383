#include<stdio.h>
int main(){
    int n,i,flag=1,j;
    printf("enter the no:");
    scanf("%d",&n);
    for(i=2; i<=n; i++){
        flag=1;
        for(j=2; j<=i/2; j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d is prime\n", i);
        }
    }
    return 0;
}