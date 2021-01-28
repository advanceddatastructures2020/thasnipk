#include<stdio.h>
#include<conio.h>
struct disjSet
{
int parent[10];
int rank[10];
int n;
}dis;
void makeSet()
{
int i;
for(i=0;i<dis.n;i++)
dis.parent[i]=i;
dis.rank[i]=0;
}
void displaySet()
{
printf("\n parent array \n");
for(int i=0;i<dis.n;i++)
printf("%d",dis.parent[i];
}
printf("rank array \n");
for(int i=0;i<dis.n;i++)
{
printf("%d",dis.rank[i]);
}
printf("\n");
int find(int x)
if(dis.parent[x]!=x)
{
dis.parent[x]=find(dis.parent[x]);
}
return dis.parent[x];
void union(int x,int y)
{
int xset=find(x);
int yset=find(y);
if(xset==yset)
return;
if(dis.rank[xset]<dis.rank[yset])
{
dis.parent[xset]=yset;
dis.rank[xset]=1;
}
else if(dis.rank[xset]>dis.rank[yset])
{
dis.parent[yset]=xset;
dis.rank[yset]=1;
}
else
{
dis.parent[yset]=xset;
dis.rank[xset]=dis.rank[xset]+1;
dis.rank[yset]=1;
}
}
int main()
{
int n,x,y;
printf("\n how many elements \n");
scanf("%d",&dis.n);
makeSet();
int ch,wish;
do
{
printf("\n------ MENU------\N");
printf("\n1.union\n2.find\n3.display\n");
printf("\n enter choice \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter elements to perform union \n");
scanf("%d %d",&x,&y);
union(x,y);
break;
case 2:
printf("enter elements to check connected components \n");
scanf("%d%d",&x,&y);
if(find(x)==find(y)
printf("connected components \n");
break;
case 3:
displaySet();
break;
}
printf("\n do you wish to continue?(1/0)\n")
scanf("%d",&wish);
}
while(wish==1);
return 0;
}