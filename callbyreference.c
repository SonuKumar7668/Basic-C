#include<stdio.h>
int square(int n);
int sq(int* n);
int main(){
    int n;
    scanf("%d",&n);
    printf("square = %d \n", square(n));
    printf("number = %d\n",n);
    printf("square = %d \n", sq(&n));
    printf("number = %d\n",n);
    return 0;
}
int square(int n){
    n=n*n;
    return n;
}
int sq(int* n){
    *n = (*n) * (*n);
    return *n;
}