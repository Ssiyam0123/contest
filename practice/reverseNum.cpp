//123->321


#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int reverse = 0;

    while (x > 0)
    {
        int last = x % 10;
        reverse *= 10;
        reverse += last;
        x/=10;
    }

    printf("%d", reverse);

    return 0;
}

/**
 * x = 123
 * reverse = 0
 * 
 * 123>0
 * 
 * last = 123 % 10  = 3
 * reverse = reverse(0) * 10 = 0
 * reverse = reverse (0) + last(3) = 3;
 * X = X/10 = 123/10 = 12
 * 
 * 
 * 12>0
 * 
 * last = 12 % 10  = 2
 * reverse = reverse(3) * 10 = 30
 * reverse = reverse (30) + last(2) = 32;
 * X = X/10 = 12/10 = 1
 * 
 * 
 * 1>0
 * 
 * last = 1 % 10  = 1
 * reverse = reverse(32) * 10 = 320
 * reverse = reverse (320) + last(1) = 321;
 * X = X/10 = 1/10 = 0.1
 */

