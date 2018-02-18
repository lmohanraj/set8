#include<stdio.h>
int main()
{
	int a,b,i,n,c=0;
	printf("input\n");
	scanf("%d%d",&a,&b);
	a=a*b;
	for(i=1;i<a;i++)
	{
		n=a/i;
		if(n==i)
		{
		c++;
		}
	}
	if(c>0)
	printf("yes");
	else
	printf("no");
	return 0;
}
	
