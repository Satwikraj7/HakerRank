#include <stdio.h>
#include <stdlib.h>

struct Node{int data;struct Node*next;};

struct Node* insert(struct Node*head,int data){
    struct Node*new=malloc(sizeof(struct Node));
    new->data=data;new->next=NULL;
    if(!head) return new;
    struct Node*cur=head;while(cur->next)cur=cur->next;
    cur->next=new;return head;
}

int main(){
    int n;scanf("%d",&n);
    struct Node*head=NULL;
    for(int i=0;i<n;i++){int x;scanf("%d",&x);head=insert(head,x);}
    for(struct Node*cur=head;cur;cur=cur->next) printf("%d ",cur->data);
    return 0;
}
