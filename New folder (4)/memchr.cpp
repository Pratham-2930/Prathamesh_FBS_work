#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100]="Hello";
	char str2[100]="World";
	char str3[100];
	char temp[100];
	char *p;
	size_t n;
		
    printf("strcoll = %d\n",strcoll("Apple","Banana"));
	
	return 0;
}