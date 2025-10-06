#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    
int res = 1;
for(int i = 1; i<=b; i++){
res *= a;
}

printf("%d", res);
    return 0;
}