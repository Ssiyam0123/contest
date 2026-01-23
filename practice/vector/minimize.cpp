#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        int ans;

        for (int i = x; i <= y; i++)
        {
            ans = (i - x) + (y - i);
        }
        cout << ans << endl;
    }

    return 0;
}