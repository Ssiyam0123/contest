#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<string> inp(n);

    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }

    reverse(inp.begin(), inp.end());

    for (auto it : inp)
    {
        cout << it << endl;
    }

    return 0;
}