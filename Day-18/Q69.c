#include<stdio.h>
int main(){
    int i,j,n,a[100],temp;
    printf("Enter the no of elemnets = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted Array = \n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}