#include <stdio.h>
#include <stdlib.h>

struct Node{int data;struct Node*left,*right;};

struct Node* insert(struct Node*root,int val){
    if(!root){root=malloc(sizeof(struct Node));root->data=val;root->left=root->right=NULL;}
    else if(val<=root->data) root->left=insert(root->left,val);
    else root->right=insert(root->right,val);
    return root;
}

int height(struct Node*root){
    if(!root) return -1;
    int l=height(root->left),r=height(root->right);
    return (l>r?l:r)+1;
}

int main(){
    int n;scanf("%d",&n);
    struct Node*root=NULL;
    for(int i=0;i<n;i++){int x;scanf("%d",&x);root=insert(root,x);}
    printf("%d",height(root));
    return 0;
}
