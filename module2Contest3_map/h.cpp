#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<int,int> m;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x]++;
    }

    int rmvcnt = 0;

    for(auto it : m){
        int x = it.first;
        int f = it.second;

        if(f > x) {
            rmvcnt += f - x;   
        }
        else if(f < x) {
            rmvcnt += f;       
        }
    }

    cout << rmvcnt << endl;

    return 0;
}
