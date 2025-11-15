#include<stdio.h>
int main(){
    // your code here
    int n;
    scanf("%d", &n);
    int sum = 0;

    while (n>0)
    {
        /* code */
        int last = n/10;
        int lastNum = n%10;
        sum = sum + lastNum;
    }
    printf("%d", sum);
    
    return 0;
}
//123 = 1+2+3=6


