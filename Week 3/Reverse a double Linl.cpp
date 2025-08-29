#include <stdio.h>
#include <stdlib.h>

struct Node{int data;struct Node*next,*prev;};

struct Node*reverse(struct Node*head){
    struct Node*cur=head,*temp=NULL;
    while(cur){
        temp=cur->prev;
        cur->prev=cur->next;
        cur->next=temp;
        cur=cur->prev;
    }
    if(temp) head=temp->prev;
    return head;
}
