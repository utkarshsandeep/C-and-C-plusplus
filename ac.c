#include<stdio.h>
int f(int *a,int b)
{
	b=b-1;
	if(b==0)return 1;
	*a=*a+1;
	return f(a,b)*(*a);
}
int main()
{
	int a=3,b=3;
	int c=f(&a,b);
	printf("%d",c);
}
