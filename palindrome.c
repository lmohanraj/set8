#include <stdio.h>
#include<string.h>
int main()
{
	int i,n,c=0;
     char a[20];
     printf("input");
     gets(a);
     n=strlen(a);
     for(i=0;i<n;i++)
     {
     	if(a[i]!=a[n-1-i])
     	{
     	c++;
     	break;
     	}
     }
     if(c==0)
     printf("yes");
     else
     printf("no");
	return 0;
}
