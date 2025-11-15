#include<stdio.h>
int main(){
    // your code here
    int x = 23;
    int count = 0;
    for(int i = 2; i < x; i++){
        if(x%i == 0){
            count++;
        }

    }

    if(count == 0 ){
        printf("prime");
    }
    else {
        printf("composite");
    }
    return 0;
}