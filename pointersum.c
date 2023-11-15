#include<stdio.h>
int cal(int *x,int *y,int *s,int *p,int *h){
    *s = (*x) + (*y);
    *p = (*x) * (*y);
    *h = (*x + *y) /2;   
}
int main(){
    int a,b,s,p,h;
    printf("inter the value of a and b\n");
    scanf("%d \n %d",&a,&b);
    cal(&a,&b,&s,&p,&h);
    printf("sum = %d \n product = %d \n average = %d \n",s,p,h);
    return 0;
}