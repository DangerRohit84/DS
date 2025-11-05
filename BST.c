#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}treenode;

treenode* create_treenode(int val)
{
    treenode* newnode=(treenode *)malloc(sizeof(treenode));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

treenode *insertANewnode(treenode* root,int val)
{
    treenode* new_node=create_treenode(val);
    if(root==NULL)
    {
        root=new_node;
        return root;
    }
    
    treenode* temp=root;
    treenode* parent=NULL;

    while(temp!=NULL)
    {
        parent=temp;
        if(temp->data > val) temp=temp->left;
        else temp=temp->right;
    }
    if(val < parent->data) parent->left=new_node;
    else parent->right=new_node;
    return root;
}
void InOrder(treenode *root){
	if(root!=NULL){
		InOrder(root->left);
        printf("%d ",root->data);
		InOrder(root->right);
	}
    
}
bool search(treenode* root,int val)
{
    treenode* temp=root;
    while(temp!=NULL)
    {
        if(temp->data==val) return true;
        if(temp->data > val) temp=temp->left;
        else temp=temp->right;
    }
    return false;
}

int success(treenode* root)
{
    treenode* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}

treenode* deleteNode(treenode* root, int key) {
    if(root==NULL) return NULL;
    else if(root->data > key) 
    {
        root->left=deleteNode(root->left,key);
    }
    else if(root->data < key)
    {
        root->right=deleteNode(root->right,key);
    }
    else
    {
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }
        else if(root->left==NULL || root->right==NULL)
        {
            treenode* temp;
            if(root->left==NULL)
            {
                temp=root->right;
            }
            else
            {
                temp=root->left;
            }
            free(root);
            return temp;
        }
        else
        {
            int s=success(root->right);
            root->data=s;
            root->right = deleteNode(root->right, s);
        }
    }
    return root;
}

int main()
{
    printf("1.Construct\n2.Transversal\n3.Search\n4.Delete Node\nAny other to exit\n");
    int t;
    treenode* root=NULL;
    
    while(1)
    {
        scanf("%d",&t);
        if(t==1)
        {
            // Construct a BST
            int num[]={40,32,68,54,79,16,52,29,146,7};
            int n=sizeof(num)/sizeof(num[0]);
            for(int i=0;i<n;i++)
            {
                root=insertANewnode(root,num[i]);
            }
            printf("Done\n");
        }
        else if(t==2)
        {
            // In-order
            InOrder(root);
            printf("\n");
        }
        else if(t==3)
        {
            int val;
            scanf("%d",&val);
            printf("%s\n",search(root,val)? "Yes":"No");
        }
        else if(t==4)
        {
            int key;
            scanf("%d",&key);
            root=deleteNode(root,key);
            InOrder(root);
            printf("\n");
        }
        else break;
    }
}