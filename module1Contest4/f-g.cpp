#include <stdio.h>


int main()
{
    // your code here
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int i = 1;
    int j = i - 1;

    while (arr[i] > arr[j])
    {
        if(arr[i] == arr[j]){
            break;
        }
        // printf("%d %d\n",arr[i] ,arr[j]);
        i++;
        j++;
    }

    printf("%d", arr[i-1]);

    // checkIt(arr,n);

    return 0;
}