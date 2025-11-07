#include<stdio.h>
int main(){
    int count = 5;

    for (int i = 1; i<=count; i++){
        for(int  j = 1 ; j<= i ; j++){
            printf("X");
        }
        printf("\n");
    }
    return 0;
}