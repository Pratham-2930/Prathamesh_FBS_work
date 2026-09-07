#include<stdio.h>

struct Employee
{
	int id;
	char name[30];
	float salary;
};

void store(struct Employee*e)
{
	printf("Enter ID:");
	scanf("%d",&e->id);
	
	printf("Enter Name:");
	scanf("%s",e->name);
	
	printf("Enter Marks:");
	scanf("%f",&e->salary);
}

void display(struct Employee e)
{
	printf("\nId=%d",e.id);
	printf("\nName=%s",e.name);
	printf("\nsalary=%.2f",e.salary);
}

int main()
{
	struct Employee e;
	
	store(&e);
	display(e);
}