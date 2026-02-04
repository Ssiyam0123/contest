#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin>>q;
    vector<int>arr;
    while(q--){
        int type;
        cin>>type;
        
        if(type == 0){
            int x;
            cin>>x;
            arr.push_back(x);
            
        }

        if(type == 1){
            int p;
            cin>>p;
            cout<<arr[p]<<endl;
        }

        if(type == 2){
            arr.pop_back();
        }
    }
    return 0;
}