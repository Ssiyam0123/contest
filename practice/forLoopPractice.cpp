#include <stdio.h>
int main()
{
    // your code here
    int n;
    scanf("%d", &n);
    int sum = 0;
    int min = 2000000000;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        sum = sum + a;

        if (a < min)
        {
            min = a;
        }
        else if (a > max)
        {
            max = a;
        }
    }
    printf("%d\n", sum);
    printf("min :%d\n", min);
    printf("max :%d\n", max);
    return 0;

    
}