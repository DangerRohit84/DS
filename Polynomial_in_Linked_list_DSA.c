#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct Polynomial
{
    int coeff;
    int ex;
    struct Polynomial* next;

}Poly;

Poly* insert_at_tail(Poly* head,int coef,int pow)
{
    Poly* newnode= (Poly*)malloc(sizeof(Poly));
    newnode->coeff=coef;
    newnode->ex=pow;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        Poly* temp=head;
        
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    return head;
}
Poly* create_polynomial()
{
    int n;
    scanf("%d",&n);
    Poly* head=NULL;
    for(int i=0;i<n+1;i++)
    {
        int coeff,ex;
        scanf("%d %d",&coeff,&ex); 
        head=insert_at_tail(head,coeff,ex);
    }
    return head;
}

void display(Poly* head)
{
    Poly* temp=head;
    while(temp!=NULL)
    {
        printf("%dx^%d",temp->coeff,temp->ex);
        if(temp->next!=NULL) printf("+");
        temp=temp->next;
    }
    printf("\n");
}

int main()
{
    Poly* P1= create_polynomial();
    display(P1);

}