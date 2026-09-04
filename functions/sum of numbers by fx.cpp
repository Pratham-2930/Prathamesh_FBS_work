#include<stdio.h>

int sumRange(int start,int end)
{
	int i,sum=0;
	
	for(i=start;i<=end;i++)
	{
		sum=sum+i;
	}
	
	return sum;
}

int main()
{
	int start,end,result;
	
	printf("Enter start:");
	scanf("%d",&start);
	
	printf("Enter end:");
	scanf("%d",&end);
	
	result=sumRange(start,end);
	
	printf("Sum=%d",result);
	
	return 0;
}