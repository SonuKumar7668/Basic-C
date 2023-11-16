#include<stdio.h>
int main(){
    int final;
    int price[3];
    for(int i=0;i<3;i++){
        printf("inter price of product number %d :\n",i);
        scanf("%d",&price[i]);
    }
    for(int i=0;i<3;i++){
        int gst=price[i]*18/100;
        final =price[i]+gst;
        printf("%d \n",final);
    }
    return 0;
}