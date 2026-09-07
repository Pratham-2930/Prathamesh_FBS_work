#include<stdio.h>

struct Product
{
	int id;
	char name[30];
	int quantity;
	float price;
};

void store(struct Product*p)
{
	printf("Enter ID:");
	scanf("%f",&p->id);
	
	printf("Enter Name:");
	scanf("%s",p->name);
	
	printf("Enter Quantity:");
	scanf("%f",&p->quantity);
	
	printf("Enter Price:");
	scanf("%f",&p->price);
}

void display(struct Product p)
{
	printf("\nID=%d",p.id);
	printf("\nName=%s",p.name);
	printf("\nQuantity=%d",p.quantity);
	printf("\nPrice=%.2f",p.price);
}

int main()
{
	struct Product p;
	
	store (&p);
	display(p);
}