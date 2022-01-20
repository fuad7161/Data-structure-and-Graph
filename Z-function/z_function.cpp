#include<bits/stdc++.h>
using namespace std;

vector<int>z_function(string s){
    int n = (int)s.size();
    vector<int>z(n);
    for(int i=1,l = 0,r = 0 ;i<n;i++){
        if(i <= r){
            z[i] = min(r-i+1, z[i-l]);
        }
        while(i+z[i] < n and s[z[i]] == s[i+z[i]]){
            z[i]++;
        }
        if(i+z[i]-1 > r){
            l = i;
            r = i+z[i]-1;
        }
    }
    return z;
}

int main(){
    cin.tie(0);ios::sync_with_stdio(false);
    
    string s;
    cin>>s;

    vector<int>ans = z_function(s);

    for(auto i: ans){
        cout<<i<<" ";
    }cout<<endl;
    

    return 0;
}
