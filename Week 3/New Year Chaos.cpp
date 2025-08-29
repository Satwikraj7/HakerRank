#include <stdio.h>

int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        int a[n];for(int i=0;i<n;i++) scanf("%d",&a[i]);
        int bribes=0,ok=1;
        for(int i=0;i<n;i++){
            if(a[i]-(i+1)>2){ok=0;break;}
            for(int j=(a[i]-2>0?a[i]-2:0);j<i;j++) if(a[j]>a[i]) bribes++;
        }
        if(ok) printf("%d\n",bribes);
        else printf("Too chaotic\n");
    }
    return 0;
}
