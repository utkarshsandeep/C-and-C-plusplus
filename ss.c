#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float per;
};
int main()
{
	struct student s1={20,"ABC",75.5};
	struct student s2;
	scanf("%d",&s2.id);
	scanf("%s",&s2.name);
	scanf("%f",&s2.per);
	printf("%d\t%s\t%f\n",s1.id,s1.name,s1.per);
	printf("%d\t%s\t%f",s2.id,s2.name,s2.per);
}
