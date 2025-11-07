#include<stdio.h>
int main(){
    // your code here
    int x = 200;
    for(int i = 2; i < x; i++){
        int count = 0;
        for(int j = 2 ; j < i; j++){
            if(i%j == 0){
                count++;
            }
        }

        if(count == 0){
            printf("%d is a prime number.\n", i);
        }else{
            printf("%d is a composite number.\n",i);
        }

    }
    return 0;
}