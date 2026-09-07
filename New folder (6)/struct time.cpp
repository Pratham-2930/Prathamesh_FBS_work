#include<stdio.h>

struct Distance
{
	int feet;
	float inch;
	
};

void store(struct Distance*d)
{
	printf("Enter Feet:");
	scanf("%d",&d->feet);
	
	printf("Enter inch:");
	scanf("%s",&d->inch);
}

void display(struct Distance d)
{
	printf("\ndistance=%d feet%.2f inch",d.feet,d.inch);
}

int main()
{
	struct Distance d;
	
	store (&d);
	display(d);
}