#include<stdio.h>

int main()
{
	int arr[60],n,i,count;
	
	printf("Enter  size of array:");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);
	    
	printf("Prime numbers:");
	
	for(i = 0;i<n;i++)
	{
		if(arr[i]<2)
		   continue;
		count =0;
		
		for(j = 1; j <= arr[i];j++)
		{
			if(arr[i] % j==0)
			   count ++;
		}
		
		if(count == 2)
           printf("%d",arr[i]);
    }
	return 0;
}