#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        unsigned long long n; cin>>n;
        int turn=0;
        while(n>1){
            if((n & (n-1))==0) n>>=1;
            else{
                unsigned long long p=1ULL<<(63-__builtin_clzll(n));
                n-=p;
            }
            turn^=1;
        }
        cout<<(turn?"Louise\n":"Richard\n");
    }
}
