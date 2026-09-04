#include<stdio.h>

void triangle(int a,int b,int c)
{
	if(a==b&&b==c)
	   printf("Equilateral Triangle");
	else if(a==b||b==c||a==c)
	   printf("Isosceles Triangle");
	else
	   printf("Scelene Triangle");
}

int main()
{
	int a,b,c;
	
	printf("Enter three sides:");
	scanf("%d%d%d",&a,&b,&c);
	
	triangle(a,b,c);
	
	return 0;
}
  