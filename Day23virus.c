#include <stdio.h>
#include <math.h>
int main(void)
{
	int x;
	//scanf("%d",&x);
	int i;
	int a;
	long z[10];
	long k;
	int j=0;
	for(k=1;k<=10;k=(k+1+j+1))
	{
		z[k-1]=k;
		j++;
	}
	for(k=0;k<5;k++)
	{
		printf("%d\n",z[k]);
	}
}
