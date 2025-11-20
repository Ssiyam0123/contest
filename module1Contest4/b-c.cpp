#include<stdio.h>
int main(){
    // your code here
    int n,s;
    scanf("%d %d",&n, &s);
    int arr[n];
    for(int i= 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int start = n-s;

    for(int i = start; i<=n-1; i++){
        printf("%d ",arr[i]);
    }

    for(int i = 0; i<n - s; i++ ){
        printf("%d ", arr[i]);
    }
    
    return 0;
}