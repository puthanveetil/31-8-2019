#include<stdio.h>
int main()
{
int i,j;
char s[100];
scanf("%s",&s);
char a[6]="hello";
	for(i=0,j=0;j<5,s[i]!='\0';i++)
	{
		if(s[i]==a[j])
		{
			j++;
		}
	}
	if(j==5)
	printf("YES");
	else
	printf("NO");
	return 0;
}