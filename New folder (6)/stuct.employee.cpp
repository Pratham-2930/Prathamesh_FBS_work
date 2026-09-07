#include<stdio.h>

struct Admin
{
	int id;
	char name[30];
	float salary;
	float allowance;
};

void store(struct Admin*a)
{
	printf("Enter ID:");
	scanf("%d",&a->id);
	
	printf("Enter Name:");
	scanf("%s",a->name);
	
	printf("Enter Marks:");
	scanf("%f",&a->salary);
}

void display(struct Admin a)
{
	printf("\nId=%d",a.id);
	printf("\nName=%s",a.name);
	printf("\nsalary=%.2f",a.salary);
	printf("\nAllowance=%2f",a.allowance);
}

int main()
{
	struct Admin a;
	
	store(&a);
	display(a);
}