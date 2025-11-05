#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}treenode;
treenode *createNewNode(int val)
{
    treenode *new_node = (treenode *)malloc(sizeof(treenode));
    new_node->data = val;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
void preOrder(treenode *root){
	if(root!=NULL){
        printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
void InOrder(treenode *root){
	if(root!=NULL){
		InOrder(root->left);
        printf("%d ",root->data);
		InOrder(root->right);
	}
}
void postOrder(treenode *root){
	if(root!=NULL){
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ",root->data);
	}
}
int main()
{
    treenode *n1=createNewNode(10);
    treenode *n2=createNewNode(20);
    treenode *n3=createNewNode(30);
    treenode *n4=createNewNode(40);
    treenode *n5=createNewNode(50);
    treenode *n6=createNewNode(60);
    treenode *n7=createNewNode(70);
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;
    treenode *root = n1;
    preOrder(root);
    printf("\n");
    InOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
	return 0;

}