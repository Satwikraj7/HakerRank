#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Trie{int end;struct Trie*next[26];};

struct Trie*newNode(){struct Trie*t=malloc(sizeof(struct Trie));t->end=0;for(int i=0;i<26;i++)t->next[i]=NULL;return t;}

int insert(struct Trie*root,char*s){
    struct Trie*cur=root;
    for(int i=0;s[i];i++){
        int idx=s[i]-'a';
        if(!cur->next[idx])cur->next[idx]=newNode();
        cur=cur->next[idx];
        if(cur->end) return 1;
    }
    cur->end=1;
    for(int i=0;i<26;i++) if(cur->next[i]) return 1;
    return 0;
}

int main(){
    int n;scanf("%d",&n);
    struct Trie*root=newNode();
    char s[100005];
    for(int i=0;i<n;i++){
        scanf("%s",s);
        if(insert(root,s)){printf("BAD SET\n%s",s);return 0;}
    }
    printf("GOOD SET");
    return 0;
}
