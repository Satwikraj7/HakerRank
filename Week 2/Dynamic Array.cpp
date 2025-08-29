#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<vector<int>> seq(n);
    int last=0;
    while(q--){
        int t,x,y;cin>>t>>x>>y;
        int idx=(x^last)%n;
        if(t==1) seq[idx].push_back(y);
        else{
            last=seq[idx][y%seq[idx].size()];
            cout<<last<<"\n";
        }
    }
}
