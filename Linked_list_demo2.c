#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *next;

};
int main()
{
    struct node *n1= (struct node*)malloc(sizeof(struct node));
    n1->data = 'H';
    n1->next = NULL;

    struct node *n2= (struct node*)malloc(sizeof(struct node));
    n2->data = 'e';
    n2->next = NULL;

    struct node *n3= (struct node*)malloc(sizeof(struct node));
    n3->data = 'l';
    n3->next = NULL;

    struct node *n4= (struct node*)malloc(sizeof(struct node));
    n4->data = 'l';
    n4->next = NULL;

    struct node *n5= (struct node*)malloc(sizeof(struct node));
    n5->data = 'o';
    n5->next = NULL;

    //Connecton Forming
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;

    // Accessing the values of the nodes
    printf("N1 Value:%c\n",n1->data);
    printf("N2 Value:%c\n",n1->next->data);
    printf("N3 Value:%c\n",n1->next->next->data);
    printf("N1 Value:%c\n",n1->next->next->next->data);
    printf("N1 Value:%c\n",n1->next->next->next->next->data);
    printf("%c%c%c%c%c\n",n1->data,n1->next->data,n1->next->next->data,n1->next->next->next->data,n1->next->next->next->next->data);

    struct node *temp=n1;
    while(temp!=NULL)
    {
        printf("%c",temp->data);
        temp=temp->next;
    }
}
