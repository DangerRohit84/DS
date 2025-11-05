#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void postfix_to_solve(char postfix[])
{
    int n=strlen(postfix);
    int st[n+1];
    int top=-1;
    for(int i=0;i<n;i++)
    {
        if(isalnum(postfix[i]))
        {
            st[++top]=postfix[i]-'0';
        }
        else
        {
            int b = st[top--];
            int a = st[top--];
            if(postfix[i]=='+')
            {
                st[++top]=a+b;
            }
            else if(postfix[i]=='-')
            {
                st[++top]=a-b;
            }
            else if(postfix[i]=='*')
            {
                st[++top]=a*b;
            }
            else
            {
                st[++top]=a/b;
            }
        }
    }
    
    printf("\nAnswer is %d\n",st[top]);
}

int main()
{
    char postfix[1000];
    printf("Enter an expresion in postfix form: ");
    scanf("%s", postfix);
    printf("Infix Notation : %s",postfix);
    postfix_to_solve(postfix);
    return 0;
}