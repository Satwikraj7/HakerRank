#include <stdio.h>

int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n;scanf("%d",&n);
        int a[n];for(int i=0;i<n;i++) scanf("%d",&a[i]);
        int max_sum=a[0],cur=a[0],max_non= a[0];
        for(int i=1;i<n;i++){
            if(cur<0)cur=0;cur+=a[i];if(cur>max_sum)max_sum=cur;
            if(a[i]>0||max_non<a[i]){if(max_non<0)max_non=a[i];}
        }
        int non=a[0];for(int i=1;i<n;i++)if(non<a[i])non=a[i];
        int sum=0;for(int i=0;i<n;i++)if(a[i]>0)sum+=a[i];
        if(sum==0)sum=non;
        printf("%d %d\n",max_sum,sum);
    }
    return 0;
}
