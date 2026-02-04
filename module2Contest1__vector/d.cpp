#include <bits/stdc++.h>
using namespace std;

int main() {
int n,k;
cin>>n>>k;

vector<int>arr(n);

for(int i = 0; i<n; i++){
    cin>>arr[i];
}

int target = arr[k-1];
int counter=0;

for(auto it : arr){
    if(it>=target && it>0){
        counter++;
    }
}


cout<<counter;
    return 0;
}