#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int min_size;
    int waste_level;

    cin >> n;
    cin >> min_size;
    cin >> waste_level;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int total = 0;
    int counter = 0;
    for (auto it : arr)
    {
        if (it > min_size)
        {
            continue;;
        }
        else
        {
            total += it;
        }

        if (total > waste_level)
        {
            counter++;
            total = 0;
        }
    }
    cout << counter;

    return 0;
}