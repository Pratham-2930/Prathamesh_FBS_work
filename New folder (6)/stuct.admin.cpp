#include<stdio.h>

struct HR
{
	int id;
	char name[30];
	float salary;
	float commission;
};

void store(struct HR*h)
{
	printf("Enter ID:");
	scanf("%d",&h->id);
	
	printf("Enter Name:");
	scanf("%s",h->name);
	
	printf("Enter Marks:");
	scanf("%f",&h->salary);
	
	printf("Enter Commission:");
	scanf("%f",&h->commission);
}

void display(struct HR h)
{
	printf("\nId=%d",h.id);
	printf("\nName=%s",h.name);
	printf("\nsalary=%.2f",h.salary);
	printf("\nAllowance=%2f",h.commission);
}

int main()
{
	struct HR h;
	
	store(&h);
	display(h);
}