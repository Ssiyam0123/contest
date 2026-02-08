#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> v;
    map<string, int>m;

    while (t--)
    {
        string s;
        cin >> s;

        // for(auto i : v){
        //     if(s == i){
        //         cout<<"Yes";
        //         cout<<i<< ':' <<s<<endl;
        //     }
        // }
        v.push_back(s);
        m[s]++;

        if(m[s] >= 2){

            cout<<"yes"<<endl;
        }else{
            cout<<"No"<<endl;;
        }
    }

    return 0;
}