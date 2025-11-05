#include<stdio.h>
#include<stdlib.h>

typedef struct root{
    int data;
    struct root *left;
    struct root *right;
}root;

int main()
{
    root * head=malloc(sizeof(root));
    head->data=30;
    head->left=NULL;
    head->right=NULL;

}