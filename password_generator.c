#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main()
{
    int len;
    printf("Enter Length of your password: ");
    scanf("%d",&len);
    if(len<=1)
    {
        printf("Enter Length of Password More then 1 ");
        return 1;
    }

    char* pass=malloc(len+1);

    char* Digits="0123456789";
    int dl=strlen(Digits);
    char* Upper="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int ul=strlen(Upper);
    char* Lower="abccdefijklmnopqrstuvwxyz";
    int ll=strlen(Lower);
    char* Special="@#$!";
    int sl=strlen(Special);
    srand(time(NULL));
    
    int s;
    printf("Do you want Special character \n1.Yes\n2.No\n");
    scanf("%d",&s);

    for(int i=0;i<len;i++)
    {
        int n=rand()%3;
        if(n==0) pass[i]=Digits[rand() % dl];
        else if(n==1) pass[i]=Upper[rand() % ul];
        else if(n==2) pass[i]=Lower[rand() % ll];
        else 
        {
            if(s==1)
                pass[i]=Special[rand() % sl];
        }
    }
    pass[len+1]='\0';
    printf("%s",pass);
}