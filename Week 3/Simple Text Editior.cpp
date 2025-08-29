#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char text[1000005];
char stack[1000][1000005];
int top=-1;

void save(){strcpy(stack[++top],text);}
void undo(){strcpy(text,stack[top--]);}

int main(){
    int q;scanf("%d",&q);
    text[0]='\0';
    while(q--){
        int t;scanf("%d",&t);
        if(t==1){char s[1000005];scanf("%s",s);save();strcat(text,s);}
        else if(t==2){int k;scanf("%d",&k);save();text[strlen(text)-k]='\0';}
        else if(t==3){int k;scanf("%d",&k);printf("%c\n",text[k-1]);}
        else undo();
    }
    return 0;
}
