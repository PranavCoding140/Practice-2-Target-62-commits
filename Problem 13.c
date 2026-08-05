/*Problem 13 
Given the root of Binary Search Tree(BST) and k>0, find kth smallest element in BST*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left, *right;
};
struct node *maketree(struct node *tree){
    int data;
    tree=(struct node*)malloc(sizeof(struct node));
    printf("Enter the values of tree:");
    scanf("%d", data);
    
}
struct node *findkth(struct node *tree, struct node* left, struct node* right){/*which traversal technique to be used? answer: inorder*/
    int k;
    struct node *ptr;
    printf("Enter the kth element to be found:");
    scanf("%d", k);
    void inorder(struct node *tree){
    if(tree!=NULL){
        while(tree->left!=k||tree->right!=k){/*WARNING:- COMPARISON BETWEEN POINTER AND INTEGER*/
        inorder(tree->left);
        printf("%d", tree->data);
        inorder(tree->right);
        }
    }}
}
int main(){
    struct node *tree;
    struct node *maketree(struct node *tree);
    struct node *findkth(struct node *tree, struct node* left, struct node* right);
    return 0;
}