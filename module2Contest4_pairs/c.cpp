#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    set<pair<string, string>> st;

    while (t--)
    {
        string n;
        string clr;
        cin >> n >> clr;
        st.insert({n, clr});
    }
    cout << st.size();

    return 0;
}