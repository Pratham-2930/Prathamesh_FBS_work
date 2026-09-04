#include<stdio.h>

float average(int a,int b,int c,int d,int e)
{
  return (a+b+c+d+e)/5.0;
}

int main()
{
    int a =10,b=20,c=30,d=40,e=50;
	
	printf("Average =%.2f",average(a,b,c,d,e));
	
	return 0;
}