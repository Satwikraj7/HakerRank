#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;scanf("%d%d",&n,&m);
    long long *arr=calloc(n+2,sizeof(long long));
    while(m--){
        int a,b,k;scanf("%d%d%d",&a,&b,&k);
        arr[a]+=k;arr[b+1]-=k;
    }
    long long max=0,sum=0;
    for(int i=1;i<=n;i++){sum+=arr[i];if(sum>max)max=sum;}
    printf("%lld",max);
    return 0;
}
