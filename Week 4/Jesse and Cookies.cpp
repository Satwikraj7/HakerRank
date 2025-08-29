#include <stdio.h>
#include <stdlib.h>

int cmp(const void*a,const void*b){return *(int*)a-*(int*)b;}

int main(){
    int n,k;scanf("%d%d",&n,&k);
    int *a=malloc(n*sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    int ops=0;
    while(n>1&&a[0]<k){
        int m1=a[0],m2=a[1];
        for(int i=2;i<n;i++) a[i-2]=a[i];
        n-=2;
        int new=m1+2*m2;
        int j=n;while(j>0&&a[j-1]>new){a[j]=a[j-1];j--;}
        a[j]=new;n++;ops++;
    }
    if(a[0]>=k) printf("%d",ops);
    else printf("-1");
    return 0;
}
