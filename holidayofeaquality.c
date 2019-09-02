#include<stdio.h>
int main()
 
{
int n,i,a[100],max=0,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]>max)
{ 
max=a[i];
}
}
for(i=0;i<n;i++)
{
sum+=(max-a[i]);
}
printf("%d", sum);
 
 
 return 0;}