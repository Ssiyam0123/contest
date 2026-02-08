#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;

   map<string, string>a;

    for (int i = 0; i < n; i++)
    {
        string n, ip;
        cin >> n >> ip;

         ip+=';';

        a[ip] = n;
    }
    for (int i = 0; i < m; i++)
    {
        string n, ip;
        cin >> n >> ip;
        cout<<n<<' '<<ip<<" #"<<a[ip]<<endl;
    }

   

    return 0;
}