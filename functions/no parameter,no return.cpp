#include<stdio.h>

void operation(int n)
{
	if(n%2==0)
	   printf("Even");
	else
	   printf("Odd");
}

int main()
{
	int n;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	operation(n);
	
	return 0;
}