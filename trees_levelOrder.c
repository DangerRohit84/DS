#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
        int data;
        struct Node* left;
        struct Node* right;
}treeNode;

treeNode* create_treenode(int val)
{
    treeNode* newnode=(treeNode *)malloc(sizeof(treeNode));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void levelOrder(treeNode* root)
{
    treeNode* q[100];

    int front=0,rear=0;
    q[rear++]=root;

    while(front!=rear)
    {
        treeNode* del_node= q[front];
        if(del_node->left!=NULL) q[rear++]=del_node->left;
        if(del_node->right!=NULL) q[rear++]=del_node->right;
        printf("%d ",del_node->data);
        front++;
    }
}
int main()
{
    treeNode* n1=create_treenode(10);
    treeNode* n2=create_treenode(20);
    treeNode* n3=create_treenode(30);
    treeNode* n4=create_treenode(40);
    treeNode* n5=create_treenode(50);
    treeNode* n6=create_treenode(60);
    treeNode* n7=create_treenode(70);
    n1->left=n2;
    n1->right=n3;
    n2->left=n4;
    n2->right=n5;
    n3->left=n6;
    n3->right=n7;
    treeNode* root=n1;
    levelOrder(root);
}