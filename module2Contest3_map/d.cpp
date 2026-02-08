#include <bits/stdc++.h>
using namespace std;

int main()
{

    while (1)
    {
        int n;
        cin >> n;
        if(n==0) break;
        map<string, int> mp;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            mp[s]++;
        }

        int maxcount = 0;
        string s2;

        for (auto it : mp)
        {
            if (it.second > maxcount)
            {
                maxcount = it.second;
                s2 = it.first;
            }
        }
        cout << s2 << endl;
    }

    return 0;
}