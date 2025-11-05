#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int val;
    struct Node* next;
}Node;

Node* front=NULL;
Node* rear=NULL;

void Enqueue(int val)
{
    Node* newnode=(Node*)malloc(sizeof(Node));
    newnode->val=val;
    newnode->next=NULL;

    if(rear==NULL)
    {
        rear=front=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void Dequeue()
{
    if(front==NULL)
    {
        printf("Queue is Underflow\n");
        return;
    }
    
    Node* temp=front;
    printf("Dequeueing %d..",front->val);
    front=front->next;
    if(front==NULL) rear=NULL;
    free(temp);
}

void Display()
{
    if(front==NULL)
    {
        printf("Queue is Underflow\n");
        return;
    }

    Node* temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");
}

void Peek()
{
    if(front==NULL)
    {
        printf("Queue is Underflow\n");
        return;
    }
    printf("Front Value is %d\n",front->val);
}

int main() {
    int choice, element;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Peek\nEnter any other number to exit\n");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter the element to enqueue: ");
            scanf("%d", &element);
            Enqueue(element);
        } else if (choice == 2) {
            Dequeue();
        } else if (choice == 3) {
            Display();
        } else if (choice == 4) {
            Peek();
        } else {
            printf("Thank You\n");
            break;
        }
    }

    return 0;
}

