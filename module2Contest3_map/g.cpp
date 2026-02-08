#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++){
        int n, r;
        cin >> n >> r;

        map<int, map<int,int>> mp;
        bool corrupted = false;

        for(int j = 0; j < r; j++){
            int id, c;
            cin >> id >> c;

            mp[id][c]++;

            if(mp[id][c] > 1) {   
                corrupted = true;
            }
        }

        cout << "Scenario #" << i << ": ";
        if(corrupted)
            cout << "impossible\n";
        else
            cout << "possible\n";
    }

    return 0;
}
