#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> n;
    int x;
    cin >> x;
    for(int i = 0; i<x; i++){
        int z;
        cin>>z;
        n.push_back(z);
    }

    sort(n.begin(),n.end());
    for(int it : n) cout<<it<<" ";
    
    return 0;
}