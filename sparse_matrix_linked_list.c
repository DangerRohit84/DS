#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    int r;
    int c;
    struct node* next;
}Node;
Node* head=NULL;
void display()
{
    if(head==NULL)
    {
        printf("No Elements are in linked list");
    }
    else
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            printf("Row:%d\tCol:%d\tData:%d\n",temp->r,temp->c,temp->data);
            temp=temp->next;
        }
    }
}
void insert_at_tail(int val,int r,int c)
{
    Node* newnode= (Node*)malloc(sizeof(Node));
    newnode->data=val;
    newnode->r=r;
    newnode->c=c;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        Node* temp=head; 
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void construct_sparse_matrix(int n,int m)
{
    Node* temp=head;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(temp->r==i && temp->c==j)
            {
                printf("%d ",temp->data);
                temp=temp->next;
            }
            else
            {
                printf("%d ",0);
            }
        }
        printf("\n");
    }
}
int main()
{
    int n,m;
    printf("Enter the dimensions of sparse matrix:");
    scanf("%d %d",&n,&m);
    int non_zero;
    printf("Enter the No of non-zeros elements present in sparse matrix:");
    scanf("%d",&non_zero);
    for(int i=0;i<non_zero;i++)
    {
        int r,c;
        printf("Enter the row and column index of non-zero element of %d:",i+1);
        scanf("%d %d",&r,&c);
        int val;
        printf("Enter the non-elements %d:",i+1);
        scanf("%d",&val);
        insert_at_tail(val,r,c);
    }
    construct_sparse_matrix(n,m);
}