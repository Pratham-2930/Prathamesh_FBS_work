#include<stdio.h>

int main()
{
	int a[100],b[100],c[200];
	int n1,n2,i;
	
	printf("Enter elements of first array:\n");
	scanf("%d",&n1);
	
	printf("Enter elements of first array:\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&n2);
	}
	
	printf("Enter size of second array:\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	//copy second array
	for(i=0;i<n2;i++)
	{
		printf("%d",c[i]);
	}
	   return 0;
}
