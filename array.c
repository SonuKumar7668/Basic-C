#include<stdio.h>
int main(){
    int mark[3];

    printf("inter marks of phy: ");
    scanf("%d",&mark[0]);
    
    printf("inter marks of che: ");
    scanf("%d",&mark[1]);

    printf("inter marks of math: ");
    scanf("%d",&mark[2]);

    for(int i=0;i<3;i++){
        printf("%d \n",mark[i]);
    }
    return 0;
}