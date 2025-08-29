#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int&i:a)cin>>i;
        sort(a.begin(),a.end());
        int mid=(n-1)/2;
        swap(a[mid],a[n-1]);
        int l=mid+1,r=n-2;
        while(l<=r) swap(a[l++],a[r--]);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";
    }
}
