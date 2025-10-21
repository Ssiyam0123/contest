#include <stdio.h>

int main()
{
    int n, m, x, y;

    scanf("%d %d", &n, &m);
    scanf("%d %d", &x, &y);

    printf("%d", (n * x) + (m * y));

    return 0;
}