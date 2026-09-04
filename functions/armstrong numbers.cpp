#include<stdio.h>

void armstrongRange(int n)
{
	int i,temp,rem,sum;
	

	for(i=1;i<=n;i++)
	{
		temp=i;
		sum=0;
		
		while(temp!=0)
	{
		rem=temp%10;
		sum=sum+rem *rem *rem;
		temp=temp/10;
	}
	
	if(sum==i)
	   printf("%d",i);
    }
}
 
	
