#include<stdio.h>
void strongRange(int n)
{
	int i,temp,rem,j,fact,sum;
	
	for(i=1;i<=n;i++)
	{
	  rem=temp%10;
	  fact=fact*j;
	  
	   sum=sum+fact;
	   temp=temp/10;
	}
	
	if(sum==i)
	   printf("%d",i);
}