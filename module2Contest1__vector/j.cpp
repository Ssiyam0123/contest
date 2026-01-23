#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        vector<int> arr(x);

        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }

        int largest = INT_MIN, second = INT_MIN;

        for (int it : arr)
        {
            if (it > largest)
            {

                second = largest;
                largest = it;
            }

            else if (it > second && it != largest)
            {

                second = it;
            }
        }

        int sum = largest+ second;
        cout<<sum<<endl;
    }
}
