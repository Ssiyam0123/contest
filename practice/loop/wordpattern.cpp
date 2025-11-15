#include<stdio.h>
int main(){
    // your code here
    for(int i =0; i<=5; i++){
        for(int j = 0; j< i; j++){
            printf("%c",'a'+ j);
        }
        printf("\n");
    }
    return 0;

}

/**
 * 
a
ab
abc
abcd
abcde

 */