#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = 0;
    cin >> x;
    arr.erase(arr.begin() + x - 1);

    int y, z;
    cin >> y >> z;

    arr.erase(arr.begin() + y - 1, arr.begin() + z - 1);

    cout << arr.size() << "\n";

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}