#include <stdio.h>
#include <stdlib.h>

int *adj[100005],deg[100005],vis[100005];
void dfs(int u){vis[u]=1;for(int i=0;i<deg[u];i++)if(!vis[adj[u][i]])dfs(adj[u][i]);}

int main(){
    int q;scanf("%d",&q);
    while(q--){
        int n,m;long long cl,cr;scanf("%d%d%lld%lld",&n,&m,&cl,&cr);
        for(int i=1;i<=n;i++){deg[i]=0;vis[i]=0;}
        for(int i=0;i<m;i++){int u,v;scanf("%d%d",&u,&v);adj[u]=realloc(adj[u],(deg[u]+1)*sizeof(int));adj[v]=realloc(adj[v],(deg[v]+1)*sizeof(int));adj[u][deg[u]++]=v;adj[v][deg[v]++]=u;}
        if(cl<=cr){printf("%lld\n",cl*n);continue;}
        long long cost=0;
        for(int i=1;i<=n;i++)if(!vis[i]){dfs(i);cost+=cl;cost+=cr*(deg[i]?deg[i]-1:0);}
        printf("%lld\n",cost);
    }
    return 0;
}
