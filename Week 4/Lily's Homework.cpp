#include <stdio.h>
#include <stdlib.h>

int cmp(const void*a,const void*b){return *(int*)a-*(int*)b;}

int swaps(int *a,int *b,int n){
    int *pos=malloc((n+1)*sizeof(int));
    for(int i=0;i<n;i++) pos[b[i]]=i;
    int cnt=0;
    for(int i=0;i<n;i++){
        while(a[i]!=b[i]){
            int temp=a[i],idx=pos[a[i]];
            a[i]=a[idx];a[idx]=temp;
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n;scanf("%d",&n);
    int *a=malloc(n*sizeof(int)),*b=malloc(n*sizeof(int)),*c=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){scanf("%d",&a[i]);b[i]=a[i];c[i]=a[i];}
    qsort(b,n,sizeof(int),cmp);
    qsort(c,n,sizeof(int),cmp);for(int i=0;i<n/2;i++){int t=c[i];c[i]=c[n-1-i];c[n-1-i]=t;}
    int ans1=swaps(a,b,n),ans2=swaps(a,c,n);
    printf("%d",ans1<ans2?ans1:ans2);
    return 0;
}
