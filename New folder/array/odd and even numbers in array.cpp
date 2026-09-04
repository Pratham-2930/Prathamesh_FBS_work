#include<stdio.h>

int main()
{
	int arr[50],n,i;
	
	printf("Enter  size of array:");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	printf("Alternate elements:");
	
	for(i = 0;i<n;i+2)
	    printf("%d",arr[i]);
	    
	return 0;
}