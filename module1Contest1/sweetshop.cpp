#include<stdio.h>

int main(){
    int a,b;

    scanf("%d %d", &a, &b);
    int res = a-(10*b);
    int jilabi = res/20;
    printf("%d", jilabi);
}