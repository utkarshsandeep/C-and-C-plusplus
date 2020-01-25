#include <stdio.h>
#include <math.h>
int main(void) {
	int i=1,j=5,z;
	while(i<=5)
	{
		j=5;
		while(j>=i)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
	return 0;
}

