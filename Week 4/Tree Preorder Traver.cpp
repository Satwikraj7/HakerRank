#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node* newNode(int val) {
    struct Node* node = malloc(sizeof(struct Node));
    node->data = val;
    node->left = node->right = NULL;
    return node;
}

struct Node* insert(struct Node* root, int val) {
    if (!root) return newNode(val);
    if (val <= root->data) root->left = insert(root->left, val);
    else root->right = insert(root->right, val);
    return root;
}

void preorder(struct Node* root) {
    if (!root) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

int main() {
    int n; scanf("%d", &n);
    struct Node* root = NULL;
    for (int i = 0; i < n; i++) {
        int x; scanf("%d", &x);
        root = insert(root, x);
    }
    preorder(root);
    return 0;
}
