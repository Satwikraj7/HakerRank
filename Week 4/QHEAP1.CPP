#include <stdio.h>
#include <stdlib.h>

int heap[100000],sz=0;

void swap(int*i,int*j){int t=*i;*i=*j;*j=t;}
void push(int x){heap[++sz]=x;int i=sz;while(i>1&&heap[i]<heap[i/2]){swap(&heap[i],&heap[i/2]);i/=2;}}
void pop(){heap[1]=heap[sz--];int i=1;while(1){int l=i*2,r=i*2+1,s=i;if(l<=sz&&heap[l]<heap[s])s=l;if(r<=sz&&heap[r]<heap[s])s=r;if(s!=i){swap(&heap[i],&heap[s]);i=s;}else break;}}
int find(int x){for(int i=1;i<=sz;i++)if(heap[i]==x)return i;return -1;}
void erase(int x){int idx=find(x);if(idx==-1)return;heap[idx]=heap[sz--];while(idx>1&&heap[idx]<heap[idx/2]){swap(&heap[idx],&heap[idx/2]);idx/=2;}int i=idx;while(1){int l=i*2,r=i*2+1,s=i;if(l<=sz&&heap[l]<heap[s])s=l;if(r<=sz&&heap[r]<heap[s])s=r;if(s!=i){swap(&heap[i],&heap[s]);i=s;}else break;}}

int main(){
    int q;scanf("%d",&q);
    while(q--){
        int t;scanf("%d",&t);
        if(t==1){int x;scanf("%d",&x);push(x);}
        else if(t==2){int x;scanf("%d",&x);erase(x);}
        else printf("%d\n",heap[1]);
    }
    return 0;
}
