#include<stdio.h>
int main(){
    int age = 22;
    int *ptr = &age;
    int _age = *ptr;
    printf("_age = %d \n", _age);
    printf("%p\n", &age);
    printf("%u\n",ptr);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    printf("%d\n",ptr);
    printf("%d\n",*(&age));
    printf("%d \n",*ptr);
    return 0;
}