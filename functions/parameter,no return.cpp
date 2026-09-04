#include <stdio.h>

void add(int a,int b)
{
	printf("Addition=%d",a+b);
}

int main()
{
	int a,b;
	
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	
	add(a,b);
	
	return 0;
}