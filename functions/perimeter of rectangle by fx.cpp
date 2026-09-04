#include<stdio.h>

void perimeter(int length,int width)
{
    return 2 * (length + width);
}

int main()
{
	int length =10;
	int width = 5;
	
	printf("Perimeter =%d",perimeter(length,width));
	
	return 0;
}

