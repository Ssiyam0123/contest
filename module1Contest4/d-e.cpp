#include<stdio.h>
int main(){
    // your code here
    int n,m;
    scanf("%d %d",&n,&m);

    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;

    for(int i = 1; i<n; i++){

        int j = i-1;
        int k = arr[i]- arr[j];
        // printf("k = %d\n",k);

        if(k <= m){
            printf("%d\n", arr[i]);
            count++;
            break;
        }

    }

    if(count == 0){
        printf("%d",-1);
    }

    return 0;
}