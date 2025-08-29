#include <stdio.h>
#define MOD 1000000007

long long modpow(long long a,long long b){
    long long res=1;while(b){if(b&1)res=res*a%MOD;a=a*a%MOD;b>>=1;}return res;
}

int main(){
    int n,m;scanf("%d%d",&n,&m);
    long long row[1001];row[0]=1;
    for(int i=1;i<=m;i++){row[i]=0;if(i>=1)row[i]+=row[i-1];if(i>=2)row[i]+=row[i-2];if(i>=3)row[i]+=row[i-3];if(i>=4)row[i]+=row[i-4];row[i]%=MOD;}
    long long total[1001];for(int i=1;i<=m;i++) total[i]=modpow(row[i],n);
    long long solid[1001];solid[0]=1;
    for(int i=1;i<=m;i++){solid[i]=total[i];for(int j=1;j<i;j++) solid[i]=(solid[i]-solid[j]*total[i-j])%MOD;if(solid[i]<0)solid[i]+=MOD;}
    printf("%lld",solid[m]);
    return 0;
}
