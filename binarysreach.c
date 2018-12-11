#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left,*right;
}*root,*temp,*newnode;

void insert(int data)
{
if(root==NULL)
{
root =newnode;
return ;
}
if(newnode->data<temp->data)
{
if(temp->left==NULL)
{
temp->left=newnode;
return ;
}
temp=temp->left;
}
else
{
if(temp->right==NULL)
{
temp->right=newnode;
return ;
}
temp=temp->right;
}
}
void seach(key)
{
temp=root;

while(1)

void main()
{
int ele;
int ch='y';
switch(1)
case 1:{
printf("\n enter data:");
scanf("%d",&ele);
insert(ele);
break;
}
case 2:
{
printf("\n enter key:");
scanf("%d",&key);
search(key);
}
case 3:
exit(0);
default:printf("\n re-lenter :");
}
