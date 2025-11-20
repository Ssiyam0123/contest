#include<stdio.h>
int main(){
    // your code here
    int n = 8;
    int arr[8];

    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int cnt = 0;

    for(int i = 1; i<n; i++){
        int j = i-1;
        // printf("arr[i] = %d\n", arr[i]);
        // printf("arr[j] = %d\n", arr[j]);
        // printf("case 1 : %d > %d\n", arr[i], arr[j]);
        if(arr[i] < arr[j] || arr[j]>675 || 100>arr[j] || arr[j]%25 != 0){
            cnt++;
        }
        // if(arr[j]<675 && 100<arr[j]){
        //     cnt++;
        // }
        // if(arr[j]%25 == 0){
        //     cnt++;
        // }
    }
// printf("count : %d\n", cnt);
    if (cnt  == 0)
    {
        /* code */
        printf("Yes");
    }
    if (cnt > 0)
    {
        /* code */
        printf("No");
    }
    


    return 0;
}