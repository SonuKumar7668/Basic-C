#include<stdio.h>
int main(){
    float n =2;
    float *ptr = &n;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr = %u\n",ptr);
    return 0;
}