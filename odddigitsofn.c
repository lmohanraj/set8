#include<stdio.h>
int main()
{
	int n,b,p,a[20],i=0;
	printf("input\n");
	scanf("%d",&n);
            while(n>0)
            {
            	p=n%10;
            	if(p%2!=0)
            	{
            	a[i]=p;
            	b=i;
            	i++;
            	}
            	n=n/10;
            
            }
            for(i=b;i>=0;i--)
            printf("%d ",a[i]);
	return 0;
}
