#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 2, m = 3;

    // vector<string> str(n);

    string str[n];

    for (int i = 0; i < n; i++)
    {
       cin>>str[i];
       cout<<"row "<<i<<": "<<str[i]<<endl;
    }

    return 0;
}