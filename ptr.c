#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,n,i;
	printf("Enter number of element");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		printf("Allocation Fails");
		exit(0);
	}
	else
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",ptr+i);
		}
		printf("Elements\n");
		for(i=0;i<n;i++)
		{
			printf("%d",*(ptr+i));
		}
		free(ptr);
	}
}
