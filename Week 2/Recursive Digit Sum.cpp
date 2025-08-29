#include <bits/stdc++.h>
using namespace std;
long long superDigit(string n,long long k){
    long long sum=0;
    for(char c:n) sum+=c-'0';
    sum*=k;
    while(sum>=10){
        long long s=0;
        while(sum){s+=sum%10;sum/=10;}
        sum=s;
    }
    return sum;
}
int main(){
    string n;long long k;
    cin>>n>>k;
    cout<<superDigit(n,k);
}
