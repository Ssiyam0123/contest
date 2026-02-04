#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    while (n--)
    {
        int nt;
        string s;
        cin >> nt;
        cin >> s;

        for (auto &it : s)
        {
            it = tolower(it);
        }

        string comp = "";

        comp = s[0];

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1])
            {
                comp = comp + s[i];
            }
        }

        if (comp == "meow")
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}