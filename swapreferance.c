#include<stdio.h>
void swap(int x,int y);
void sw(int *x,int *y);
int main(){
    int a,b;
    printf("Inter the value of a\n");
    scanf("%d",&a);
    printf("Inter the value of b\n");
    scanf("%d",&b);
    swap(a,b);
    // sw(&a,&b);
    printf("Value of a = %d\n",a);
    printf("Value of b = %d\n ",b);
}
void swap(int x,int y){
    int z;
    z = x;
    x = y;
    y = z; 
    printf("%d \n %d \n",x,y);   
}
void sw(int *x,int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}