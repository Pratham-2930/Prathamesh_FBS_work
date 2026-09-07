#include<stdio.h>

struct SalesManager
{
	int id;
	char name[30];
	float salary;
	float incentive;
	float target;
};

void store(struct SalesManager*s)
{
	printf("Enter ID:");
	scanf("%d",&s->id);
	
	printf("Enter Name:");
	scanf("%s",s->name);
	
	printf("Enter Marks:");
	scanf("%f",&s->salary);
	
	printf("Enter Incentive:");
	scanf("%f",&s->incentive);
	
	printf("Enter Target:");
	scanf("%f",&s->target);
}

void display(struct SalesManager s)
{
	printf("\nId=%d",s.id);
	printf("\nName=%s",s.name);
	printf("\nsalary=%.2f",s.salary);
	printf("\nAllowance=%2f",s.incentive);
	printf("\nTarget=%.2f",s.target);
}

int main()
{
	struct SalesManager;
	
	store (&s);
	display('s');
}