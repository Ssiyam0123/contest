#include<stdio.h>

int main(){
    int y;
    scanf("%d", &y);
    int lasttwo = y % 100;

    printf("k%02d\n",lasttwo);
}