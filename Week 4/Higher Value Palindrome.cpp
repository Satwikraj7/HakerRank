#include <stdio.h>
#include <string.h>

int main(){
    int n,k;scanf("%d%d",&n,&k);
    char s[100005];scanf("%s",s);
    int diff[100005]={0},cnt=0;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){diff[i]=1;cnt++;if(s[i]>s[n-1-i])s[n-1-i]=s[i];else s[i]=s[n-1-i];}
    }
    if(cnt>k){printf("-1");return 0;}
    int rem=k-cnt;
    for(int i=0;i<n/2&&rem;i++){
        if(s[i]!='9'){
            if(diff[i]&&rem>=1){s[i]=s[n-1-i]='9';rem--;}
            else if(!diff[i]&&rem>=2){s[i]=s[n-1-i]='9';rem-=2;}
        }
    }
    if(n%2&&rem) s[n/2]='9';
    printf("%s",s);
    return 0;
}
