#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        map<int,int> freq;
        for(int x : a) freq[x]++;

        int deletions = 0;
        for(auto &p : freq) {
            int num = p.first;
            int f = p.second;
            if(f < num) deletions += f;
            else if(f > num) deletions += (f - num);
        }

        cout << deletions << endl;
    }
    return 0;
}
