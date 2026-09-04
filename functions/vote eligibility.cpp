#include<stdio.h>

void upperlower()
{
	char ch;
	
	printf("Enter a character:");
	scanf("%c",&ch);
	
	if(ch>='A'&&ch<='Z')
	   printf("%c is Uppercase",ch);
	else if(ch>='a'&&ch<='z')
	   printf("%c is lowercase",ch);
	else
	   printf("It is not an alphabet");
}

int main()
{
	upperlower();
	return 0;
}