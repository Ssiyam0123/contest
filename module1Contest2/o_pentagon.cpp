#include <stdio.h>
#include <stdlib.h>

int main() {
    char s1, s2, t1, t2;
    scanf(" %c%c", &s1, &s2);
    scanf(" %c%c", &t1, &t2);

    int a = s1 - 'A';
    int b = s2 - 'A';
    int c = t1 - 'A';
    int d = t2 - 'A';

    int gap1 = abs(a - b);
    if (gap1 > 2) gap1 = 5 - gap1;

    int gap2 = abs(c - d);
    if (gap2 > 2) gap2 = 5 - gap2;

    if (gap1 == gap2)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
