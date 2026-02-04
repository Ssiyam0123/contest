#include <bits/stdc++.h>
using namespace std;

int main()
{

    int p = 0, q;
    cin >> p >> q;
    map<string, int> mp;

    for (int i = 0; i < p; i++)
    {
        string n;
        int m;
        cin >> n >> m;

        mp[n] += m;
    }

    vector<int> vct;

    for (auto it : mp)
    {
        vct.push_back(it.second);
    }

    sort(vct.begin(), vct.end());
    reverse(vct.begin(), vct.end());

  int ans = 0;

    for (int i = 0; i < min(q, (int)vct.size()); i++)
    {
        // vct[i]++;
        // cout<<q<<" "<<vct.size()<<endl;;
        ans+= vct[i];
        // cout << vct[i];
    }

    cout<<ans<<endl;

    return 0;
}