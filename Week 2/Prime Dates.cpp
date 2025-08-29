#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    if(x<2) return 0;
    for(int i=2;i*i<=x;i++) if(x%i==0) return 0;
    return 1;
}
int main(){
    int d1,m1,y1,d2,m2,y2;cin>>d1>>m1>>y1>>d2>>m2>>y2;
    tm t1={0,0,0,d1,m1-1,y1-1900},t2={0,0,0,d2,m2-1,y2-1900};
    time_t x=mktime(&t1),y=mktime(&t2);
    int cnt=0;
    for(time_t cur=x;cur<=y;cur+=86400){
        tm *d=localtime(&cur);
        int sum=d->tm_mday+d->tm_mon+1+(d->tm_year+1900);
        if(isPrime(sum)) cnt++;
    }
    cout<<cnt;
}
