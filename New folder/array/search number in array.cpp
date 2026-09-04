#include<stdio.h>

int main()
{
	int arr[100],n,i,sum = 0;
	
	printf("Enter  size of array:");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	for(i=0;i<n;i++)
	    sum = sum+ arr[i];
	    
	printf("Sum =%d",sum);
	
	return 0;
}