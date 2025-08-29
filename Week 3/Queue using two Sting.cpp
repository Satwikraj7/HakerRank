#include <stdio.h>
#define MAX 100000

int s1[MAX],s2[MAX],t1=-1,t2=-1;

void push1(int x){s1[++t1]=x;}
int pop1(){return s1[t1--];}
void push2(int x){s2[++t2]=x;}
int pop2(){return s2[t2--];}

int main(){
    int q;scanf("%d",&q);
    while(q--){
        int type;scanf("%d",&type);
        if(type==1){int x;scanf("%d",&x);push1(x);}
        else{
            if(t2==-1) while(t1!=-1) push2(pop1());
            if(type==2) pop2();
            else printf("%d\n",s2[t2]);
        }
    }
    return 0;
}
