#include<stdio.h>

struct Time
{
	int hour;
	int min;
	int sec;
};

void store(struct Time*t)
{
	printf("Enter Hour:");
	scanf("%d",&t->hour);
	
	printf("Enter Minute:");
	scanf("%s",&t->min);
	
	printf("Enter Second:");
	scanf("%f",&t->sec);
}

void display(struct time *t)
{
	printf("\nTime=%d:%d:%d",t.hour,t.min,t.sec);
}

int main()
{
	struct Time t;
	
	store (&t);
	display(t);
}