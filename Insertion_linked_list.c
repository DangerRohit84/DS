#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node* head=NULL;
void insert_at_head(int val)
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
        newnode->next=head;
        head=newnode;
    }
}
void insert_at_tail(int val)
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
void delete_at_head()
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
void delete_at_tail()
{
        if(head==NULL)
        {
            printf("There is no element in the list\n");
        }
        else if(head->next==NULL)
        {
            head=NULL;
        }
        else
        {
        struct node* temp=head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        }
        
}
void search(int val)
{
    struct node* temp=head;
    int f=0;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            f=1;
            break;
        }
        temp=temp->next;
    }
    printf("%s\n", f ? "Found" : "Not Found");

}
void get_node_count()
{
    struct node* temp=head;
    int c=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    printf("The count of Linked List is %d\n",c);
}
void insert_at_position(int p,int val)
{   
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    struct node* temp=head;
    if(head==NULL||p==0)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        p=p-1;
        while(p>1 && temp->next!=NULL)
        {
            temp=temp->next;
            p--;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    
}
int main()
{
    int n;
    while(1)
    {
        printf("Enter\n1.Insert at Head\n2.Insert at Tail\n3.Display\n4.Delete at head\n5.Delete at tail\n6.Search Element\n7.Count of Node\n8.Insert at Position\nAny other key to exit:\n");
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
            display();
        }
        else if(n==4)
        {
            delete_at_head();
        }
        else if(n==5)
        {
            delete_at_tail();
        }
        else if(n==6)
        {
            int val;
            printf("Enter the value to be searched:\n");
            scanf("%d",&val);
            search(val);
        }
        else if(n==7)
        {
            get_node_count();
        }
        else if(n==8)
        {
            int p;
            printf("Enter the position to add:");
            scanf("%d",&p);
            int val;
            printf("Enter Value:");
            scanf("%d",&val);
            insert_at_position(p,val);

        }
        else
        {
            printf("Thank you\n");
            break;
        }
    }
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node
{
    int val;
    struct node* next;
}Node;

Node* head=NULL;

Node* createNode(int val)
{
    Node* new_node=(Node*)malloc(sizeof(Node));
    new_node->val=val;
    new_node->next=NULL;
    return new_node;
}

void insert_at_head(int val)
{
    Node* new_node=createNode(val);
    if(head==NULL)
    {
        head=new_node;
        return;
    }
    new_node->next=head;
    head=new_node;
    
}

void insert_at_tail(int val)
{
    Node*new_node=createNode(val);
    if(head==NULL)
    {
        head=new_node;
    }
    else
    {
        Node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
}
void display()
{
    if(head==NULL)
    {
        printf("Linked List is empty\n");
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

void delete_at_head()
{
    if(head==NULL)
    {
        printf("Linked List is empty\n");
        return;
    }
    head=head->next;
}

void delete_at_tail()
{
    if(head==NULL)
    {
        printf("Linked List is empty\n");
        return;
    }
    if(head->next==NULL)
    {
        head=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}

bool search(int val)
{
    if(head==NULL)
    {
        return false;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->val==val) return true;
        temp=temp->next;
    }
    return false;

}

int count()
{
    if(head==NULL)
    {
        return 0;
    }
    int c=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
}

void insert_at_position(int val,int p)
{
    Node* new_node=createNode(val);
    if(head==NULL || p==0)
    {
        new_node->next=head;
        head=new_node;
        return;
    }
    Node* temp=head;
    while(p>1 && temp->next!=NULL)
    {
        temp=temp->next;
        p--;
    }
    new_node->next=temp->next;
    temp->next=new_node;

}

int main()
{
    int n;
    while(1)
    {
        printf("Enter\n1.Insert at Head\n2.Insert at Tail\n3.Display\n4.Delete at head\n5.Delete at tail\n6.Search Element\n7.Count of Node\n8.Insert at Position\nAny other key to exit:\n");
        scanf("%d",&n);
        if(n==1)
        {
            // insert at head
            int val;
            printf("Enter the value to insert: ");
            scanf("%d",&val);
            insert_at_head(val);

        }
        else if(n==2)
        {
            // insert at tail
            int val;
            printf("Enter the value to insert: ");
            scanf("%d",&val);
            insert_at_tail(val);
        }
        else if(n==3)
        {
            // display
            display();

        }
        else if(n==4)
        {
            // delete at head
            delete_at_head();

        }
        else if(n==5)
        {
            // delete at tail
            delete_at_tail();
        }
        else if(n==6)
        {
            // search a element
            int val;
            printf("Enter the value to search: ");
            scanf("%d",&val);
            printf("%s\n",search(val)==1 ? "Yes":"No");
        }
        else if(n==7)
        {
            // count nodes
            printf("%d\n",count());
        }
        else if(n==8)
        {
            // insert at position
            int val,p;
            printf("Enter the value to insert: ");
            scanf("%d",&val);
            printf("Enter the position: ");
            scanf("%d",&p);
            insert_at_position(val,p);
        }
        else break;
    }
}


*/