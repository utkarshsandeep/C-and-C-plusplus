#include <stdio.h>
#include <math.h>
int hcf(int a,int b)
{
	int i,count=0;
	for(i=1;i<=a||i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			count=i;
		}
	}
	return count;
}
int main(void) {
	int x;
	scanf("%d",&x);
	int i,j,k;
	for(i=1;i<=x;i++)
	{
		int z,count;
		scanf("%d",&z);
		int w[z];
		for(j=0;j<z;j++)
		{
			scanf("%d",&w[j]);
		}
		for(j=0;j<z-1;j++)
		{
			if(j==0)
			{
				count=hcf(w[j],w[j+1]);
			}
			else
			{
				count=hcf(count,w[j+1]);
			}
		}
		//printf("%d",count);
		for(j=0;j<z;j++)
		{
			int c=w[j]/count;
			printf("%d ",c);
		}
		printf("\n");
	}
}
