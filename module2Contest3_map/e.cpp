#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> v;
    vector<string> v2;
    string inp;

    for(int i = 0; i < n; i++){
        cin >> inp;

        string t = inp.substr(inp.size() - 3); 
        v.push_back(t);
    }

  

     for(int i = 0; i < m; i++){
        cin >> inp;

        v2.push_back(inp);
    }


    int cnt = 0;

    for(int i = 0; i<n; i++){

        string s = v[i];

        auto it = (find(v2.begin(),v2.end(),s));
        if(it != v2.end()){
            cnt++;
        }
        // for(int j = 0; j<m; j++){
        //     if(v[i] == v2[j]){
                
        //         cnt++;
        //          cout<<v[i]<<" "<<v2[j]<<endl;
        //     } 
        // }
    }

    cout<<cnt<<endl;

    return 0;
}
