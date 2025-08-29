#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n,m;cin>>n>>m;
        cout<<((m==1||n%2==0)?2:1)<<"\n";
    }
}
