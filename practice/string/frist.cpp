#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    for (auto &it : a)
        it = tolower(it);

    for (auto &it : a)
    {
        if (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u' || it == 'y')
        {
            continue;
        }
        cout << '.' << it;
    }
    cout << '\n';
    return 0;
}