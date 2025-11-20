#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int arr[t];
    for(int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }
  
    for(int i = 0; i < t; i++) {
        int n = arr[i];

        if(n % 2 == 1) {
            printf("0\n");
        } else {
            printf("%d\n", n/4 + 1);
        }
    }

    return 0;
}
