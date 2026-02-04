#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    string inp;
    cin >> inp;

    for (int i = 0; i < n; i++)
    {
        char j = inp[i]; // n
        if (i + 1 < inp.size())
        {
            char k = inp[i + 1]; // a
            if (j == 'n' && k == 'a')
            {
                inp.insert(i + 1, "y");
                n+=2;
            }
        }
        // cout << "j : " << j << " k : " << k << endl;
    }
    for (auto it : inp)
    {
        cout << it;
    }

    return 0;
}