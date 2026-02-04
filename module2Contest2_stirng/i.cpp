#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {

        string str[8];
        string ans;

        for (int i = 0; i < 8; i++)
        {
            cin >> str[i];

            for (int j = 0; j < 8; j++)
            {
                if (str[i][j] != '.')
                {
                    ans += str[i][j];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}