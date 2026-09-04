#include<stdio.h>

void ageCategory(int age)
{
	if(age<12)
	   printf("child");
	else if(age<=19)
	   printf("Teenager");
	else if(age<=59)
	   printf("Adult");
	else
	   printf("Senior");
}

int main()
{
  int age;
  
  printf("Enter age:");
  scanf("%d",&age);
  
  ageCategory(age);
  
  return 0;
}