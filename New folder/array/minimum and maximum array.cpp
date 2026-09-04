#include<stdio.h>

int main()
{
	int arr[100],n,i,num,found = 0;;
	
	printf("Enter the size of array:");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	printf("Enter numbers to search:");
	scanf("%d",&num);
	    
	for(i=1;i<n;i++)
	{
		if(arr[i]==num)
		{
			printf("Number found at index %d\n",i);
			found = 1;
			break;
		}
	}
	
	if(found ==0)
	   printf("Number not found\n");
	
	return 0;
}