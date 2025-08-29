#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<string>a(n);
        for(auto &s:a){cin>>s;sort(s.begin(),s.end());}
        bool ok=true;
        for(int j=0;j<a[0].size();j++)
            for(int i=1;i<n;i++)
                if(a[i][j]<a[i-1][j]) ok=false;
        cout<<(ok?"YES\n":"NO\n");
    }
}
