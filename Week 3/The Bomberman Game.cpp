#include <stdio.h>
#include <string.h>

int main(){
    int r,c,n;scanf("%d%d%d",&r,&c,&n);
    char g[r][c+1],f[r][c+1];
    for(int i=0;i<r;i++) scanf("%s",g[i]);
    if(n==1){for(int i=0;i<r;i++) printf("%s\n",g[i]);return 0;}
    if(n%2==0){for(int i=0;i<r;i++){for(int j=0;j<c;j++) printf("O");printf("\n");}return 0;}
    for(int t=0;t<2;t++){
        for(int i=0;i<r;i++) for(int j=0;j<c;j++) f[i][j]='O';
        for(int i=0;i<r;i++) for(int j=0;j<c;j++) if(g[i][j]=='O'){
            f[i][j]='.';if(i>0)f[i-1][j]='.';if(i<r-1)f[i+1][j]='.';if(j>0)f[i][j-1]='.';if(j<c-1)f[i][j+1]='.';
        }
        for(int i=0;i<r;i++) for(int j=0;j<c;j++) g[i][j]=f[i][j];
    }
    for(int i=0;i<r;i++){for(int j=0;j<c;j++) putchar(g[i][j]);printf("\n");}
    return 0;
}
