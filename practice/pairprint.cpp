#include<stdio.h>
int main(){
    // your code here
    int n = 10;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            if(i == j){
                continue;
            }
            printf("%d * %d = %d ; %d + %d = %d\n",i, j, i*j, i,j, i+j);
        }
        printf("\n");
    }
    return 0;
}