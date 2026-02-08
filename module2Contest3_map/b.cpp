#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> m;

    for (auto &it : s)
    {
        it = toupper(it);
        m[it]++;
    }
// cout<<m.size();
    if (m.size() == 2)
    {
        auto it = m.begin();
        auto it2 = m.begin();

        it2++;
        // cout<<it->second;

        if (it->second == 2 && it2->second == 2)
            cout << "Yes";
        else
            cout << "No";
    }
    else
        cout << "No";

    return 0;
}