#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++){int x;cin>>x;m[x]++;}
    int ans=0;
    for(auto &p:m) ans+=p.second/2;
    cout<<ans;
}
