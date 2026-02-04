#include <bits/stdc++.h>
using namespace std;

int main() {
string s;
getline(cin, s);

map<char, bool>m1;

for(auto it : s){
    it= tolower(it);
    if(it>='a' && it<='z'){
        m1[it] = true;
    }
}

bool ispangram = true;

for(char c= 'a'; c<='z'; c++){
    if(m1[c] == false){
        ispangram = false;
    }
}

if(ispangram) cout<<"pangram";
else if(!ispangram) cout<<"not pangram";

    return 0;
}