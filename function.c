#include<stdio.h>
int add();
int add (int x,int y){
    int c=x+y;
    return c;
}
int main(){
    int a,b;
    printf("Inter the first number\n");
    scanf("%d",&a);
    printf("Inter the second number\n");
    scanf("%d",&b);
    printf("sum of %d and %d = %d",a,b,add(a,b));
    return 0;
}