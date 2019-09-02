#include<stdio.h>
int main()
{
int n,i,p,d=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&p);
if(p==1)
{
d=8;
}
}
if(d==8)
{
printf("hard");
}
else
printf("easy");
}