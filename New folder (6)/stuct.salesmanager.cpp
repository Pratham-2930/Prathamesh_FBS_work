#include<stdio.h>

struct Date
{
	int date;
	int month;
	int year;
};

void store(struct Date*d)
{
	printf("Enter Date:");
	scanf("%d",&d->date);
	
	printf("Enter Month:");
	scanf("%s",&d->month);
	
	printf("Enter Year:");
	scanf("%f",&d->year);
	
}

void display(struct Date d)
{
	printf("\nDate=%d/%d%d",
	     d.date,d.month,d.year);
}

int main()
{
	struct Date d;
	
	store (&d);
	display(d);
}