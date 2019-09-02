#include <stdio.h>
#include <string.h>
int main()
{ 
int n, a, sum=0;
char s[100];
scanf("%d\n", &n);
for(a=1; a<=n; a++)
{ 
scanf("%s", &s);
if(s[0]=='T')
{
sum=sum+4;}
if(s[0]== 'C')
{
sum=sum+6;}
 if(s[0]== 'O')
{
sum=sum+8;}
 if(s[0]== 'D')
{
sum= sum+12;}
 if(s[0]== 'I')
{
sum= sum+20;
}
}
printf("%d", sum);
 
}