#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct btnode
{
int value;
struct btnode *l;
struct btnode *r;
}
*root=NULL,*temp=NULL,*t2,*t1;
void delete1();
void insert();
void delete();
void create();
void search(struct btnode *t);
void search1(struct btnode *t,int data);
int flag=1;
void main()
{
int ch;
printf("operations \n");
printf("1.insert an element into tree \n");
printf(" 2.delete an element from the tree \n");
printf("3.exit \n");
while(1)
{
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
delete();
break;
case 3:
exit(0);
break;
default:
printf("wrong choice please enter correct choice\n");
break;
}
}
}
void insert()
{
create();
if(root==NULL)
root=temp;
else
search(root);
}
void create()
{
int data;
printf("enter data of node to be inserted:");
scanf("%d",&data);
temp=(struct btnode*)malloc(1*sizeof(struct btnode));
temp->value=data;
temp->l=temp->r=NULL;
}
void search(struct btnode *t)
{
if((temp->value->t->value)&&(t->r!=NULL))
search(t->r);
else if((temp->value>t->value)&&(t->l!=NULL))
t->r=temp;
elseif((temp->value<t->value)&&(t->l!=NULL))


