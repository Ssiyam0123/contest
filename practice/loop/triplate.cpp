#include<stdio.h>
int main(){
    // your code here
    int n=4;

    for(int i = 1; i <=n ; i++){
        for(int j = i+1; j<=n ; j++){
            for(int k = j+1; k<=n; k++){
                printf("%d %d %d\n",i,j,k);
            }
        }
    }
    return 0;
}