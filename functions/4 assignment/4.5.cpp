#include<stdio.h>

int main()
{
	int n,choice,i,count,temp,rem,rev,sum;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("\n-----MENU-----\n");
	printf("1.Check Even or Odd\n");
	printf("2.Check Prime or Not\n");
	printf("3.Check Palindrome or Not\n");
	printf("4.Check Positive,Negative or Zero\n");
	printf("5.Reverse a Number\n");
	printf("6.Sum of Digits\n");
	
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
		  if(n%2==0)
		     printf("Number is Even");
		  else
		     printf("Number is Odd");
		   break;
	    case 2 :
	      count=0;
	      
	      if(n<=1)
	         count= 1;
	      else
	      {
	      	for(i=1;i<=n;i++)
		    {
		      if(n%i==0)
		        count++;
			}
	      }
	      
	      if(count==0);
	         printf("Number is Prime");
	      else
	         printf("Number is Not Prime");
	      break;
	    
	    case 3:
	    	temp=n;
	    	rev=0;
	    	
	    	for(;temp !=0;temp=temp/10)
	    	{
	    		rem=temp%10;
	    		rev=rev*10+rem;
			}
		     if(n==rev)
		       printf("Number is Palindrome");
		    else if(n<0)
		       printf("Number is Not Palindrome");
		    break;
		    
		case 4 :
			if(n>0)
			   printf("Number is Positive");
			else if(n<0)
			   printf("Number is Negative");
			else
			   printf("Number is Zero");
			break;
		case 5 :
			rev=0;
			
			for(temp=n;temp!=0;temp=temp/10)
			{
				rem=temp%10;
				rev=rev*10+rem;
			}
			
			printf("Reverse=%d",rev);
			break;
			
		case 6:
			sum=0;
			
			for(temp=n;temp!=0;temp=temp/10)
			{
			  rem=temp%10;
			  sum=sum+rem;
			}
			
			printf("Sum of digits=%d",sum);
			break;
			
		default:
			printf("Invalid Choice")
	      
    }
    
    return 0;
}