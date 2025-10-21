#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int res = (long long)pow(a, b) + (long long)pow(b, a);

    printf("%d", res);

    return 0;
}