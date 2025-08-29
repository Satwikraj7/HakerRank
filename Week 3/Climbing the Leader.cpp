#include <stdio.h>
#include <stdlib.h>

int cmp(const void*a,const void*b){return *(int*)b-*(int*)a;}

int main(){
    int n;scanf("%d",&n);
    int *a=malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    int *rank=malloc(n*sizeof(int));
    rank[0]=1;
    for(int i=1;i<n;i++) rank[i]=(a[i]==a[i-1])?rank[i-1]:rank[i-1]+1;
    int m;scanf("%d",&m);
    for(int j=0;j<m;j++){
        int x;scanf("%d",&x);
        int l=0,r=n-1,ans=n;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]<=x){ans=mid;r=mid-1;}
            else l=mid+1;
        }
        if(ans==n) printf("%d\n",rank[n-1]+1);
        else printf("%d\n",rank[ans]);
    }
    return 0;
}
