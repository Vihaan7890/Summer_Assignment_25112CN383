#include<stdio.h>
int main(){
    int a[100],b[100],c[100],i,n1,n2,j,found=0,k=0;
    printf("entr the no of elments of first array =");
    scanf("%d",&n1);
    printf("entr the no of elments of second array =");
    scanf("%d",&n2);
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("for second array");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]){
                c[k++]=a[i];
                break;
            }
        }
    }
    printf("commen =\n");
    for(i=0;i<k;i++){
        printf("%d\t",c[i]);
        
    }
    return 0;
}