#include <stdio.h>
#include <stdlib.h>

int cmp(const void*a,const void*b){return *(int*)a-*(int*)b;}

int main(){
    int n,k;scanf("%d%d",&n,&k);
    int *a=malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    int i=0,cnt=0;
    while(i<n){
        int loc=a[i]+k;
        while(i<n&&a[i]<=loc) i++;
        int tower=a[i-1];
        loc=tower+k;
        while(i<n&&a[i]<=loc) i++;
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}
