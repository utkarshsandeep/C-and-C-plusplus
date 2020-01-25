#include<stdio.h>
struct student
{
	int id;
	char name[20];
	struct dob
	{
		int day;
		int month;
		int year;
	}d1;
};
int main()
{
	int i;
	struct student s1[10];
	for(i=0;i<10;i++)
	{
		printf("Enter id: ");
		scanf("%d",&s1[i].id);
		printf("Enter name: ");
		scanf("%s",&s1[i].name);
		printf("Enter dob: ");
		scanf("%d%d%d",&s1[i].d1.day,&s1[i].d1.month,&s1[i].d1.year);
	}
	printf("Details: \n");
	for(i=0;i<10;i++)
	{
		printf("id: %d\n",s1[i].id);
		printf("name: %s\n",s1[i].name);
		printf("DOB: %d,%d,%d",s1[i].d1.day,s1[i].d1.month,s1[i].d1.year);
	}
}
