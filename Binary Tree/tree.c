#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};


struct node* createNode(int data) {
    // this function will return the pointer for the new node
    struct node *newNode= (struct node *)malloc(sizeof(struct node));
    newNode->data= data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d\n", root->data);
        preorder(root->left);
        preorder(root->right);
    }
    else
        return;
}

void inorder(struct node *root) {
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d\n", root->data);
        inorder(root->right);
    }
    else
    return;
}

void postorder(struct node *root) {
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\n",root->data);
    }
    else
    return;
}

void main() {
    struct node *root= createNode(5);  // create root node

    // children to root node
    root->left= createNode(7);
    root->right= createNode(9);

    // grendchildren of root node
    root->left->left= createNode(11);
    root->left->right= createNode(12);
    root->right->left= createNode(19);
    root->right->right= createNode(18);

    printf("PRE-ORDER: \n");
    preorder(root);

    printf("IN-ORDER: \n");
    inorder(root);

    printf("POST-ORDER: \n");
    postorder(root);
}