#include<stdio.h>
int factorial();
int factorial(int a){
    if(a==1){
        return a;
    }
    else{
        return a*factorial(a-1);

    }
}
int main(){
    int n;
    printf("Inter the valude of n\n");
    scanf("%d",&n);
    printf("%d\n",factorial(n));
    return 0;
}