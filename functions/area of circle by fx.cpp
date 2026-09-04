#include<stdio.h>

float convert(float c)
{
	return(c*9/5)+32;
}

int main()
{
	float c=25;
	
	printf("fahrenheit=%.2f",convert(c));
	
	return 0;
}