#include<stdio.h>
int st[10000],size,top=-1;
void Push(int element)
{
    if(top==size-1)
    {
        printf("The stack is Overflow\n");
        return;
    }

    st[++top]=element;
}
void Display()
{
    if(top==-1)
    {
        printf("The stack is Underflow\n");
        return;
    }
    for(int i=top;i>=0;i--)
    {
        printf("%d ",st[i]);
    }
    printf("\n");
}
void Pop()
{
    if(top==-1)
    {
        printf("The stack is Underflow\n");
        return;
    }
    printf("Deleting.... : %d\n",st[top--]);
}
void Peek()
{
    if(top==-1)
    {
        printf("The stack is Underflow\n");
        return;
    }
    printf("The Current Top is at: %d\n",st[top]);
}
int main()
{
    printf("Enter the Number to store the stacks: ");
    scanf("%d",&size);
    int n;
    
    while(1)
    {
        printf("1.Push\n2.Pop\n3.Display\n4.Peek\nEnter any number to exit\n");
        scanf("%d",&n);
        if(n==1)
        {
            int element;
            printf("Enter the element to Push in stack: ");
            scanf("%d",&element);
            Push(element);
        }
        else if(n==2)
        {
            // Pop
            Pop();
        }
        else if(n==3)
        {
            Display();
        }
        else if(n==4)
        {
            Peek();
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

int st[10000],top=-1,size;
void Push(int val)
{
    if(top==size-1)
    {
        printf("Stack is Overflow...\n");
        return;
    }
    st[++top]=val;
}

void Pop()
{
    if(top==-1)
    {
        printf("Stack is Underflow...\n");
        return;
    }
    printf("Deleting....%d\n",st[top--]);
}

void display()
{
    if(top==-1)
    {
        printf("Stack is Underflow...\n");
        return;
    }
    for(int i=top;i>=0;i--)
    {
        printf("%d ",st[i]);
    }
    printf("\n");
}
void peek()
{
    if(top==-1)
    {
        printf("Stack is Underflow...\n");
        return;
    }
    printf("Stack top value is %d\n",st[top]);
}
int main()
{
    printf("Enter the size of stack: ");
    scanf("%d",&size);
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
*/