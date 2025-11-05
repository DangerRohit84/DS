#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* head=NULL;
void delete_at_head(int val)
{
    
    if(head==NULL)
    {
        printf("There is no element in the list\n");
    }
    else
    {
        struct node* del_node= head;
        head=head->next;
        free(del_node);
    }
}
void delete_at_tail(int val)
{
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node* temp=head;
        
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
}
void display()
{
    struct node* temp=head;
    if(head==NULL)
    {
        printf("There is no element in the list\n");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("Enter\n1.Delete at Head\n2.Delete at Tail\n3.Display\nAny other key to exit:\n");
        scanf("%d",&n);
        if(n==1)
        {
            delete_at_head();
        }
        else if(n==2)
        {   
            delete_at_tail();
        }
        else if(n==3)
        {
            display();
        }
        else
        {
            printf("Thank you\n");
            break;
        }
    }
}
