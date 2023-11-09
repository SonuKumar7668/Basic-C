#include<stdio.h>
int main(){
    int km,cm,m;
    float feet,inc;
    printf("inter the distence between the cities\n");
    scanf("%d",&km);
    printf("distence between the cities is %d meters\n",m=km*1000);
    printf("distanc between the cities is %f feet\n",feet=km*3280.8399);
    printf("distance between the cities is %f inche\n",inc = km*39370.0787);
    printf("distance between the cities is %d centimeters\n",cm = km *100000);
    return 0;
}