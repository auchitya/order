#include<stdio.h>
#include<stdlib.h>
struct node
{
    char data;
    struct node *left,*right;
}*root;

struct node* create()
{ char xyz;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the node data");
    scanf("%c",&xyz);
    fflush(stdin);
    if(xyz=='A')
    {
        return NULL;
    }
    else
    {


    newnode->data=xyz;
    printf("enter the data for the left node of %c\n",xyz);
   newnode->left=create();
     printf("enter the data for the right node of %c\n",xyz);
    newnode->right=create();
    return newnode;
    }
}
int main()
{

    root=create();
    inorderprint(root);
    printf("\n");
    preorderprint(root);
     printf("\n");
    postorderprint(root);
}

void inorderprint( struct node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    else
        {
    inorderprint(temp->left);
printf("%c",temp->data);
inorderprint(temp->right);

}
}

void preorderprint( struct node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    else
        {
 printf("%c",temp->data);
    preorderprint(temp->left);
preorderprint(temp->right);

}
}

void postorderprint( struct node *temp)
{
    if(temp==NULL)
    {
        return ;
    }
    else
        {
    postorderprint(temp->left);
postorderprint(temp->right);
printf("%c",temp->data);
}
}