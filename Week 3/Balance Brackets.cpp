#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char stack[1000];
int top=-1;
void push(char c){stack[++top]=c;}
char pop(){return stack[top--];}
int empty(){return top==-1;}

int main(){
    int t;scanf("%d",&t);
    while(t--){
        char s[1005];scanf("%s",s);
        top=-1;int ok=1;
        for(int i=0;s[i];i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[') push(s[i]);
            else{
                if(empty()){ok=0;break;}
                char c=pop();
                if((s[i]==')'&&c!='(')||(s[i]==']'&&c!='[')||(s[i]=='}'&&c!='{')){ok=0;break;}
            }
        }
        if(!empty()) ok=0;
        printf(ok?"YES\n":"NO\n");
    }
    return 0;
}
