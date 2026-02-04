#include <bits/stdc++.h>
using namespace std;

int main() {

    map<int, int>mp;

    for(int i = 0; i<10; i++){
        int val;
        cin>>val;

        mp[val]++;
    }

    for(auto it : mp){
        cout<<it.first<<' '<<it.second<<endl;
    }

    return 0;
}