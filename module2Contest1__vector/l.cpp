#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        vector<int> arr(x);

        for (int i = 0; i < x; i++)
        {

            cin >> arr[i];
        }

        int largest = -1, second = -1;

        for (auto it : arr)
        {

            if (it > largest)
            {
                second = largest;
                largest = it;
            }
            else if (it > second)
            {
                second = it;
            }
        }

        for (int i = 0; i < x; i++)
        {
            int myself = arr[i];
            int res;
            if (myself != largest)
            {
                res = arr[i] - largest;
            }
            else if (myself == largest)
            {
                res = arr[i] - second;
            }
            cout << res << " ";
        }
    }
    return 0;
}