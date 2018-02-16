#include <stdio.h>
#include<string.h>
int main()
{
int i,n,count=0;
char s[20];
printf("enter the string");
scanf("%s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
	if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
	{
	count++;
	}
 
}
	if(count==0)
	printf("no");
	else
	printf("yes");
	return 0;
}
