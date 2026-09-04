#include<stdio.h>

int square(int n)
{
  return n * n;
}

int cube(int n)
{
    return n * n * n;
}

int main()
{
	int n=5;
	
	printf("Square =%d\n",square(n));
	printf("Cube =%d",cube(n));

	return 0;
}