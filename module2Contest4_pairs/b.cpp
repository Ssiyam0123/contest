#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        string st;
        cin>>st;

        pair<int, int>pos = {0,0};
        pair<int, int>d = {a,b};
        // cout<<"test "<<t<<endl;

        if(pos == d){
            cout<<'Yes'<<endl;
            continue;
        }
        
        for(auto it : st){
            it = toupper(it);
            // cout<<it<<endl;
            if(it == 'N'){
                pos.second ++;
            }
            if(it == 'E'){
                pos.first ++;
            }
            if(it == 'S'){
                pos.second --;
            }
            if(it == 'W'){
                pos.first --;
            }
        }

        cout<<pos.first<<" "<<pos.second<<endl;

        if(d == pos) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }

    return 0;
}