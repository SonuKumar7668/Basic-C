#include<stdio.h>
int main(){
    int n,i,j,a;
    printf("Inter the starting range \n");
    scanf("%d",&a);
    printf("Inter the closing range \n");
    scanf("%d",&n);
    for(j=a;j<n;j++){
        for(i=2;i<j;i++){
            if(j%i==0){
                break;
            }
        }
        if(i==j){
            printf("%d ",j);
        }
    }
    return 0;
}