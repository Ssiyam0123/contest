#include<stdio.h>
int main(){
    
    int x = 5;

    for(int i = 1; i<=x; i++){
        
       int space = x-i;
       int star = i;
         while(space--){
            printf(" ");
         }

         while(star--){
            printf("x");
        }
        printf("\n");
    }
    
}

/**
 *     x
 *    xx
 *   xxx
 *  xxxx
 * xxxxx   
 */