#include <bits/stdc++.h>
using namespace std;

int main()
{

    string inp1, inp2;
    cin >> inp1;
    cin >> inp2;

    for (auto &it : inp1)
    {
        it = tolower(it);
    }
    for (auto &it : inp2)
    {
        it = tolower(it);
    }
    for (auto &it : inp2)
    {
        tolower(it);
    }
    // for (auto &it : inp1)
    // {
    //     cout << it;
    // }
    // cout << "\n";
    // for (auto &it : inp2)
    // {
    //     cout << it;
    // }
    // cout << "\n";

    if (inp1 < inp2)
    {
        cout << -1;
    }
    else if (inp1 > inp2)
    {
        cout << 1;
    }
    else if (inp1 == inp2)
    {
        cout << 0;
    }

    return 0;
}