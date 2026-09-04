#include<stdio.h>

void armstrongRange()
{
	int n,i,temp,rem,sum;
	
	printf("Entern:");
	scanf("%d",&n);
	
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
 
	
