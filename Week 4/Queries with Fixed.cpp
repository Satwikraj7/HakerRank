#include <stdio.h>
#include <limits.h>

int main(){
    int n,q;scanf("%d%d",&n,&q);
    int a[n];for(int i=0;i<n;i++) scanf("%d",&a[i]);
    while(q--){
        int d;scanf("%d",&d);
        int max=a[0];for(int i=0;i<d;i++) if(a[i]>max) max=a[i];
        int ans=max;
        for(int i=d;i<n;i++){
            if(a[i]==max){max=a[i];}
            else{
                max=a[i-d+1];for(int j=i-d+1;j<=i;j++) if(a[j]>max) max=a[j];
            }
            if(max<ans) ans=max;
        }
        printf("%d\n",ans);
    }
    return 0;
}
