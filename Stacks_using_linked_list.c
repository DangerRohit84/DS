#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int val;
    struct node* next;
}Node;

Node* top=NULL;

void Push(int val)
{
    Node* new_node=(Node*)malloc(sizeof(Node));
    new_node->val=val;
    new_node->next=top;
    top=new_node;
}
void Pop()
{
    if(top==NULL)
    {
        printf("Stack is Undeflow\n");
        return;
    }
    Node* del=top;
    top=top->next;
    free(del);
}
void display()
{
    if(top==NULL)
    {
        printf("Stack is Undeflow\n");
        return;
    }
    Node* temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");

}
void peek()
{
    if(top==NULL)
    {
        printf("Stack is Undeflow\n");
        return;
    }
    printf("Stack top value is %d\n",top->val);
}
int main()
{
    int n;
    while (1)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Peek\nEnter any number to exit\n");
        scanf("%d",&n);
        if(n==1)
        {
            int val;
            printf("Enter the value to push to stack: ");
            scanf("%d",&val);
            Push(val);
        }
        else if(n==2)
        {
            Pop();
        }
        else if(n==3)
        {
            display();
        }
        else if(n==4)
        {
            peek();
        }
        else break;
    }
    
}