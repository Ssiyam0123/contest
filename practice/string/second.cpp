#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >>n;
    vector<string>arr(n);

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    reverse(arr.begin(), arr.end());

    for(auto it : arr)
    cout<<it<<"\n";

    return 0;
}