#include <stdio.h>
#include <math.h>
int main(void) {
	int x;
	scanf("%d",&x);
	int i,j,l;
	int k;
	for(i=1;i<=x;i++)
	{
		scanf("%d",&k);
		int a[k];
		for(j=0;j<k;j++)
		{
			scanf("%d",&a[j]);
		}
		int stor[k];
		int co=0;
		for(j=0;j<k;j++)
		{
			for(l=0;l<k-1;l++)
			{
				if(a[l]>a[l+1])
				{
					stor[co++]=a[l+1];
					stor[co++]=a[l];
				}
				else
				{
					stor[co++]=a[l];
				}
			}
			stor[j]=co;
		}
		for(j=0;j<co;j++)
		{
			printf("%d ",stor[j]);
		}
	}
}
