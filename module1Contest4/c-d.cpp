#include<stdio.h>
int main(){
    // your code here
    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n];
    int arr2[m];
    int sum = 0;
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<m; i++){
        scanf("%d",&arr2[i]);
        int x = arr2[i];
        // printf("x = %d\n",x);
        // printf("arr[x] = %d\n",arr[x-1]);
        sum = sum + arr[x-1];
    }

    printf("%d",sum);
    return 0;
}