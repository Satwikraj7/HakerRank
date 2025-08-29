#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    if(n==0){cout<<1;return 0;}
    int c=0;
    while(n){if((n&1)==0)c++;n>>=1;}
    cout<<(1LL<<c);
}
