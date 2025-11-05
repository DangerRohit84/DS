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
treenode *tree()
{
    int val;
    printf("Enter the node value (-1 for NULL) : ");
    scanf("%d",&val);

    if(val==-1) return NULL;

    treenode* newnode=createNewNode(val);
    printf("Enter the left child of %d\n",val);
    newnode->left=tree();

    printf("Enter the right chils of %d\n",val);
    newnode->right=tree();

    return newnode;

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
    treenode* root=tree();
    preOrder(root);
    printf("\n");
    InOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
	return 0;

}