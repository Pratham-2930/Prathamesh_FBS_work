#include <stdio.h>

int main()
{
  int n,i,temp,digit,fact,sum,j;
   
   printf("Enter n:");
   scanf("%d",&n);
   
   printf("strong numbers are:");
   
   for(i=1;i<=n;i++)
   {
   	 temp=i;
   	 sum=0;
   	 
	 for(;temp>0;temp=temp/10)
     {
    	digit=temp%10;
    	fact=1;
    	
    	for(j=1;j<=digit;j++)
    	{
    		fact=fact*j;
		}
		
		sum=sum+fact;
     }
     
     if(sum==i);
     {
     	printf("%d",i);
	 }
    }
    
    return 0;
}