#include<stdio.h>
int main(){
    // your code here
    int count = 10;
    for(int i = 1; i<=count; i++){
        for(int j = 1; j<=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}