#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, query;
    cin>>n>>query;
    
    vector<int>arr[n];


    for(int i= 0; i<query; i++){
        int type;
        cin>> type;

        if(type == 0){
            int t,x;
            cin>>t>>x;
            arr[t].push_back(x);
        }
        else if(type == 1){
            int t;
            cin>>t;
            for(auto it: arr[t]){
                cout<<it <<" ";
            }
            cout<<"\n";
        }
        else if(type == 2){
            int t;
            cin>>t;
            arr[t].clear();

        }
    }





    return 0;
}