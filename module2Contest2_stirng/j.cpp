#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    
    while (t--)
    {
        int n;
        cin >> n;
        
        bool found = false;
        for (int i = 0; i < 26 && !found; i++)
        {
            for (int j = 0; j < 26 && !found; j++)
            {
                for (int k = 0; k < 26 && !found; k++)
                {
                    int sum = (1 + i) + (1 + j) + (1 + k);

                    if (sum == n)
                    {
                        string word = "";
                         word += ('a' + i);
                        word += ('a' + j);
                        word += ('a' + k);
                        cout << word << endl;
                        found = true;
                    }
                }
            }
        }
    }
    return 0;
}