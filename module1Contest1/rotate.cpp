#include<stdio.h>

int main(){
    int a,b,c;

    scanf("%d%d%d", &a, &b, &c);
    int abc = a*100 + b*10 +c;
    int bca = b *100 + c*10 + a;
    int cab = c *100 + a*10 + b;
    printf("%d", abc + bca + cab);

    return 0;

}