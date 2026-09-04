#include <stdio.h>

void evenOdd()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if(n%2==0)
	   printf("Even\n");
	   scanf("odd\n");
}

void evenOdd2(int n)
{
	if(n%2==0)
	   printf("Enter number:");
	   scanf("%d",&n);
}

int evenOdd3()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	
	return n%2==0;
}

int evenOdd4(int n)
{
	return n%2==0;
}

int main()
{
	int n,result;
	
	/*1.no parameter,no return*/
	evenOdd1();
	
	/*2.Parameter,no return*/
	printf("Enter number:");
	scanf("%d",&n);
	evenOdd2(n);
	
	/*3.no parameter,return*/
	result=evenOdd3()
	if (result)
	    printf("Even\n");
	else
	    printf("Odd\n");
	    
	/*4.Parameter,return*/
	printf("Enter number:");
	scanf("%d",&n);
	
	result=evenodd4(n);
	
	if(result)
	   printf("Even\n");
	else
	   printf("Odd\n");
	   
	return 0;
}
	    
}