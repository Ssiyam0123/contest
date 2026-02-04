#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
   vector<int> arr(n + 1,0);
    for (int i = 0; i < m; i++)
    {
        int x = -1;
        char y;
        cin >> x >> y;

        if (arr[x] == 0 && y == 'M')
        {
            arr[x] = 1;
            cout<<"Yes\n";
        }

        else
        {
            cout<<"No\n";
        }

    }

    // for (auto it : arr)
    // {
    //     cout << it << " ";
    // }
    return 0;
}