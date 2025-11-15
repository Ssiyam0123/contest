#include<stdio.h>
int main(){
    // your code here
    int n;
    scanf("%d",&n);
    int arr[7*n];
    int sum = 0;
    for(int i = 0; i<7*n; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    // for(int i = 0; i<7*n; i++){
    //     printf("%d. %d\n", i+1, arr[i]);
    // }
    printf("%d",sum);
    return 0;
}