#include<stdio.h>
int main(){
    int sal,dns,hr;
    //sal is short for salary dns for dearness allowance and hr is house rent allowance;
    printf("inter the salery of Ramesh\n");
    scanf("%d",&sal);
    dns= sal*2/5;
    printf("Ramesh's dearness allowence is %d\n",dns);
    hr= sal*1/5;
    printf("Ramesh's home rent allowence is %d\n",hr);
    printf("Ramesh's total gross salery is %d",sal+dns+hr);
    return 0;
}