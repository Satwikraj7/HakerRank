#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;scanf("%d",&t);
    while(t--){
        int m,n;scanf("%d%d",&m,&n);
        int *a=malloc(n*sizeof(int));
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==m){
                    printf("%d %d\n",i+1,j+1);
                    goto next;
                }
            }
        }
        next:;
    }
    return 0;
}
