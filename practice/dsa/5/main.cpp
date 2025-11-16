#include <stdio.h>

int main()
{
    int n;
    int low = 0, high, mid, key;

    printf("enter the number of scores : ");
    scanf("%d", &n);

    int arr[n];
    high = n - 1;   // NOW high is correct

    printf("enter the elements of array (sorted): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the number for search : ");
    scanf("%d", &key);

    while(low<=high){
        mid = (high+low) /2;

        if(arr[mid]==key){
            printf("poisition : %d", arr[mid]);
            break;
        }else if(arr[mid]> key){
            high = mid-1;
        }else low = mid+1;
    }

    return 0;
}
