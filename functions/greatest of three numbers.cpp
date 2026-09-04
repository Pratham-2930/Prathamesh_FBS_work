#include<stdio.h>

void result(int marks)
{
	if(marks>75)
	   printf("Distinction");
	else if(marks>65)
	   printf("First Class");
	else if(marks>55)
	   printf("Second Class");
	else if(marks>40)
	   printf("Pass Class");
	else
	   printf("Fail");
}

int main()
{
	int marks;
	
	printf("Enter marks:");
	scanf("%d",&marks);
	
	result(marks);
	
	return 0;
}
  