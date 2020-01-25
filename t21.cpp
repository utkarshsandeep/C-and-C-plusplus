#include <stdio.h>
#include <math.h>
int main(void)
{
	int x;
	scanf("%d",&x);
	int i;
	int a[x];
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=0,min=100;
	for(i=0;i<x;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("max = %d\n",max);
	printf("min = %d\n",min);
}
