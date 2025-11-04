// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-1; j++){
            printf("(*)");
        }
        printf("  ");
    }

    return 0;
}