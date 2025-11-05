#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    struct Node* prev;
    int data;
    struct Node* Next;
}Node;

Node* head=NULL;
Node* tail=NULL;

Node* create_new_node(int val)
{
	Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->prev=NULL;
	new_node->data = val;
	new_node->Next = NULL;
	return new_node;
}

void insert_at_head(int val)
{
    Node* new_node=create_new_node(val);
    if(head==NULL && tail==NULL)
    {
        head=new_node;
        tail=new_node;
    }
    else
    {
        head->prev=new_node;
        new_node->Next=head;
        head=new_node;
    }
}
void insert_at_tail(int val)
{
    Node* new_node=create_new_node(val);
    if(head==NULL && tail==NULL)
    {
        head=new_node;
        tail=new_node;
    }
    else
    {
        tail->Next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }
}
void display_from_head()
{
    if(head==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->Next;
    }
    printf("\n");
}
void display_from_tail()
{
    if(head==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    Node* temp=tail;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
void delect_at_head()
{
    if(head==NULL && tail==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    else
    {
        Node* del_node=head;
        head=head->Next;
        head->prev=NULL;
        free(del_node);

    }
}

void delect_at_tail()
{
    if(head==NULL && tail==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    else
    {
        if(head==tail) 
        {
            head=NULL;
            tail=NULL;
            return;
        }
        tail=tail->prev;
        tail->Next=NULL;
        
    }
}

int main()
{
    int n;
    while(1)
    {
        printf("\tEnter\n\t1.Insert at Head\n\t2.Insert at Tail\n\t3.Display From Head\n\t4.Display From Tail\n\t5.Delete at head\n\t6.Delete at tail\n\tAny other key to exit:\n");
        scanf("%d",&n);
        if(n==1)
        {
            int val;
            printf("Enter the value to be inserted at head:\n");
            scanf("%d",&val);  
            insert_at_head(val); 
        }
        else if(n==2)
        {
            int val;
            printf("Enter the value to be inserted at tail:\n");
            scanf("%d",&val);  
            insert_at_tail(val);
        }
        else if(n==3)
        {
            display_from_head();
        }
        else if(n==4)
        {
            display_from_tail();
        }
        else if(n==5)
        {
            delect_at_head();
        }
        else if(n==6)
        {
            delect_at_tail();
        }
        else
        {
            printf("Thank You\n");
            break;
        }
    }
}

/*
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    struct node* prev;
    int val;
    struct node* next;
}Node;

Node* head=NULL;
Node* tail=NULL;

Node* createNode(int val)
{
    Node* new_node=(Node*)malloc(sizeof(Node));
    new_node->prev=NULL;
    new_node->val=val;
    new_node->next=NULL;
    return new_node;
}

void insert_at_head(int val)
{
    Node* new_node=createNode(val);
    if(head==NULL && tail==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    new_node->next=head;
    head->prev=new_node;
    head=new_node;
}

void insert_at_tail(int val)
{
    Node* new_node=createNode(val);
    if(head==NULL && tail==NULL)
    {
        head=new_node;
        tail=new_node;
        return;
    }
    tail->next=new_node;
    new_node->prev=tail;
    tail=new_node;
}
void display_at_head()
{
    if(head==NULL && tail==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");
}
void display_at_tail()
{
    if(head==NULL && tail==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    Node* temp=tail;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->prev;
    }
    printf("\n");
}
void delete_at_head()
{
    if(head==NULL && tail==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    if(head->next==NULL)
    {
        head=tail=NULL;
        return;
    }
    Node* del=head;
    head=head->next;
    head->prev=NULL;
    free(del);
}
void delete_at_tail()
{
    if(head==NULL && tail==NULL)
    {
        printf("Linked list is empty\n");
        return;
    }
    if(head->next==NULL)
    {
        head=tail=NULL;
        return;
    }
    Node* del=tail;
    tail=tail->prev;
    tail->next=NULL;
    free(del);
}
int main()
{
    int n;
    while(1)
    {
        printf("\tEnter\n\t1.Insert at Head\n\t2.Insert at Tail\n\t3.Display From Head\n\t4.Display From Tail\n\t5.Delete at head\n\t6.Delete at tail\n\tAny other key to exit:\n");
        scanf("%d",&n);
        if(n==1)
        {
            // insert at head;
            int val;
            printf("Enter the value to insert: ");
            scanf("%d",&val);
            insert_at_head(val);
        }
        else if(n==2)
        {
            int val;
            printf("Enter the value to insert: ");
            scanf("%d",&val);
            insert_at_tail(val);
        }
        else if(n==3)
        {
            display_at_head();
        }
        else if(n==4)
        {
            display_at_tail();
        }
        else if(n==5)
        {
            delete_at_head();
        }
        else if(n==6)
        {
            delete_at_tail();
        }
        else break;
    }
}
*/