#include<stdio.h>
struct dob
{
	int day;
	int month;
	int year;
};
struct student
{
	int id;
	char name[20];
	struct dob d1;
};
int main()
{
	struct student s1;
	printf("Enter id: ");
	scanf("%d",&s1.id);
	printf("Enter name: ");
	scanf("%s",&s1.name);
	printf("Enter dob: ");
	scanf("%d%d%d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
	printf("Details: \n");
	printf("id: %d\n",s1.id);
	printf("name: %s\n",s1.name);
	printf("DOB: %d,%d,%d",s1.d1.day,s1.d1.month,s1.d1.year);
}
