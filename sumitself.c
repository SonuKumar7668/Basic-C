#include<stdio.h>
int main(){
    int n;
    printf("inter the value\n");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        int i=n%10;
        sum+=i;
        n/=10;
    }
    printf("%d",sum);
    return 0;
}