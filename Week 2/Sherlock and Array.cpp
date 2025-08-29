#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;cin>>T;
    while(T--){
        int n;cin>>n;
        vector<long long>a(n);
        long long sum=0;
        for(auto &x:a){cin>>x;sum+=x;}
        long long left=0;
        bool ok=false;
        for(int i=0;i<n;i++){
            if(left==sum-left-a[i]){ok=true;break;}
            left+=a[i];
        }
        cout<<(ok?"YES\n":"NO\n");
    }
}
