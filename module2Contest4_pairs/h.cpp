#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<pair<pair<string, string>, int>> a;

    for (int i = 0; i < t; i++)
    {
        string name, surname;
        int dob;

        cin >> name >> surname >> dob;

        a.push_back({{name, surname}, -dob});
    }

    sort(a.begin(), a.end());
    // reverse(a.begin(),a.end());

    for (auto &it : a)
    {
        cout << it.first.second << " "
             << it.first.first << " "
             << -it.second << endl;
    }

    return 0;
}