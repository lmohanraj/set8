#include <stdio.h>
#include<string.h>
int main()
{
int n,p;
char s[20];
printf("enter the string\n");
scanf("%s",s);
n=strlen(s);
p=(n/2);
if(n%2!=0)
{
 s[p]='*';
}
else
{
	s[p-1]='*';
	s[p]='*';
}
 printf("%s",s);
	return 0;
}
