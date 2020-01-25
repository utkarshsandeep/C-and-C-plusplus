#include<stdio.h>
	int stepcount(int x)
	{
		if(x==1)
		{
			return 1;
		}
		else if(x==2)
		{
			return 2;
		}
		else if(x==3)
		{
			return 4;
		}
		else
		{
			return (stepcount(x-1)+stepcount(x-2)+stepcount(x-3));
		}
	}
	void main()
	{
		int n;
		scanf("%d",&n);
		int r;
		r=stepcount(n);
		printf("%d",r);
	}

