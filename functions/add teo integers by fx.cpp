#include<stdio.h>

float area(float r)
{
	return 3.14*r*r;
}

int main()
{
	float radius=5;
	
	printf("Area of Circle=%.2f",area(radius));
	
	return 0;
}