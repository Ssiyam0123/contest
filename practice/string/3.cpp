#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    for (auto &it : a)
    {
        it = tolower(it);
    }
    for (auto &it : b)
    {
        it =tolower(it);
    }

    if (a > b)
        cout << 1;
    if (a < b)
        cout << -1;
    if (a == b)
        cout << 0;
    return 0;
}