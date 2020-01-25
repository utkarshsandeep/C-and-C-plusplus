#include <stdio.h>
#include <math.h>
int main(void)
{
	int x;
	printf("size\n");
	scanf("%d",&x);
	int i,j;
	int a[x];
	printf("array\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("sum\n");
	int s;
	scanf("%d",&s);
	int ss[50][2];
	int co=0;
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if(s==(a[i]+a[j]))
			{
				ss[co][0]=a[i];
				ss[co++][1]=a[j];
			}
		}
	}
	for(i=0;i<co;i++)
	{
		printf("%d %d\n",ss[i][0],ss[i][1]);
	}
}
