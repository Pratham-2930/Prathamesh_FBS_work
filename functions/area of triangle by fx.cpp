#include<stdio.h>

int totalMarks(int a,int b,int c,int d,int e)
{
	return a+b+c+d+e;
}

float percentage(int total)
{
	return (total/500.0)*100;
}

int main()
{
	int s1 = 80;
	int s2 = 75;
	int s3 = 90;
	int s4 = 85;
	int s5 = 70;
	
	int total;
	
	total =totalMarks(s1,s2,s3,s4,s5);
	
	printf("Total Marks =%d\n",total);
	printf("Percentage =%.2f%%",percentage(total));
	
	return 0;
}