// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, m;

//     cin >> n >> m;
//     vector<string> v;
//     vector<string> v1;

//     string s;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> s;
//         v.push_back(s);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> s;
//         v1.push_back(s);
//     }

//     int j = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if(j < m && v[i] == v1[j]) {
//             cout << "Yes"<<endl;;
//             j++;
//             // cout << "Yes" << endl;
//         }
//         else
//             cout << "No" << endl;
//     }
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,m;
    cin>>n>>m;
    vector<string>s(n);

    unordered_set<string>us;

    for(int i  = 0; i<n; i++){
        cin>>s[i];
    }

    for(int j = 0 ; j<m; j++){
        string s;
        cin>>s;
        us.insert(s);
    }


    for(int k = 0; k<n; k++){
        if(us.count(s[k])){
            cout<<"Yes"<<endl;
        }else cout<<"No"<<endl;
    }



    return 0;
}