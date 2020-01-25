#include <stdio.h>
#include <math.h>
int main(void)
{
	int x;
	scanf("%d",&x);
	int i,j;
	int y;
	scanf("%d",&y);
	int a[x];
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	int ss[50][2];
	int co=0;
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if((a[i]-a[j])<=y&&(a[i]-a[j])>0)
			{
				ss[co][0]=a[i];
				ss[co++][1]=a[j];
			}
		}
	}
	int z=0;
	int b[100];
	for(i=0;i<x;i++)
    {
    for(j=0;j<z;j++)
    {
      if(a[i] == b[j])
        break;
    }
    if (j == z)
    {
      b[z] = a[i];
      z++;
    }
  }
	printf("%d\n",(z+co));
}
