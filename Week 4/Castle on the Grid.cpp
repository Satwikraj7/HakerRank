#include <stdio.h>
#include <string.h>
#define INF 1000000

char g[105][105];
int dist[105][105];
int qx[10000],qy[10000],qh,qt;

int main(){
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%s",g[i]);
    int sx,sy,ex,ey;scanf("%d%d%d%d",&sx,&sy,&ex,&ey);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)dist[i][j]=INF;
    qh=qt=0;dist[sx][sy]=0;qx[qt]=sx;qy[qt++]=sy;
    while(qh<qt){
        int x=qx[qh],y=qy[qh++],d=dist[x][y];
        int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
        for(int k=0;k<4;k++){
            int nx=x+dx[k],ny=y+dy[k];
            while(nx>=0&&nx<n&&ny>=0&&ny<n&&g[nx][ny]=='.'){
                if(dist[nx][ny]>d+1){dist[nx][ny]=d+1;qx[qt]=nx;qy[qt++]=ny;}
                nx+=dx[k];ny+=dy[k];
            }
        }
    }
    printf("%d",dist[ex][ey]);
    return 0;
}
