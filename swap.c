
#include<stdio.h>
int main(){
    int a,b,c;
    b=0;
    printf("Inter the value of a\n");
    scanf("%d",&a);
    printf("Inter the value of b\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Now the value of a is %d \n",a);
    printf("now the valude of b is %d \n",b);
    return 0;
}