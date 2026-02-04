#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;

    cin >> n;
    cin >> str;

    map<char, bool> mp1;

    for (char &it : str)
    {
        it = tolower(it);
        cout << it << endl;
        if (it >= 'a' && it <= 'z')
        {
            mp1[it] = true;
        }
    }

    int counter = 0;

    for (char c = 'a'; c <= 'z'; c++)
    {
        if (mp1[c] == false)
        {
            counter++;
        }
    }
    cout << "counter : " << counter << endl;
    if (counter == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}