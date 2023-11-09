#include<stdio.h>
int main(){
    int n;
    printf("inter the value \n");
    scanf("%d",&n);
    int num,new,a;
    new = 0;
    while(n>0){
    if(n>10){
        num=n%10;
        n=n/10;
        new+=num;
    }
    else{
        new+=n;
        n=0;
    }
    }
    printf("sum is %d",new);
    return 0;
}