#include<stdio.h>
int main()
{
	int t,n,i,j;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d",&n);
		int a[n];
		int b[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[j]);
		}
		int c[n];
		for(j=0;j<n;j++)
		{
			c[j]=a[j]*20-b[j]*10;
			if(c[j]<0)
			{
				c[j]=0;
			}
		}
		int max=0;
		for(j=0;j<n;j++)
		{
			if(c[j]>max)
			{
				max=c[j];
			}
		}
		printf("%d",max);
	}
	return 0;
}
