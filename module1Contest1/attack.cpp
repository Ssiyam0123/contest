#include<stdio.h>

int main(){
    long long a,b;
    scanf("%lld %lld",&a, &b);

    long long res = a/b;
    if(a%b != 0) res ++;

    printf("%lld", res);
}