#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,int> mp;

    mp[1] = 12;
    mp[2] = 32;
    mp[3] = 2;

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
}
