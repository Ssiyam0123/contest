#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x;
    int y;
    cout << "enter your vector size : ";
    cin >> y;
    cout << "enter your vector elements : ";
    for (int i = 0; i < y; i++)
    {
        int z;
        cin >> z;
        x.pop_back(z);
    }

    cout << "printing vercotr elements :";
    // for (auto it : x)
    // {
    //     cout << it << " ";
    // }

    for(int i =0; i<x.size(); i++){
        cout<<x[i]<< " ";
    }

    return 0;

}
