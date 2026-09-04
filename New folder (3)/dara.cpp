#include<stdio.h>

struct Student
{
	int rollno;
	char name[30];
	int marks;
};

int main()
{
	struct Student s[5];
	int i;
	
	//input student details
	for(i=0;i<5;i++)
	{
		printf("\nEnter details of Student %d:\n",i+1);
		
		printf("Enter Roll no:");
		scanf("%d",&s[i].rollno);
		
		printf("Enter name:");
		scanf("%s",s[i].name);
		
		printf("Enter Marks:");
		scanf("%f",&s[i].marks);
	}
	
	//display student details
	printf("\n---Student Details---\n");
	
	return 0;
}