#include <stdio.h>

void prime1()
{
	int n,i,flag=0;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=2;i<n;i++)
	{
	  if(n%i==0)
       {
       	flag=1;
       	break;
	   }
    }
    
    if(n<=1||flag==1)
        printf("Not Prime\n");
    else
        printf("Prime\n");
}

void prime2(int n)
{
  int i,flag=0;
  
  for(i=2;i<n;i++)
   {
   	if(n%i==0)
   	{
   	  flag=1;
   	  break;
    }
   }
   
   if(n<=1||flag==1)
      printf("Not Prime\n");
    else
      printf("Prime\n");
}

int prime3()
{
	int n,i,flag=0;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	for(i=2;i<n;i++);
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	
	if(n>1&&flag==0)
	   return 1;
	else
	   return 0;
}

return 1;
}

int main()
{
  int n,result;
  
  prime 1();
  
  printf("Enter number:");
  scanf("%d",&n);
  prime2(n);
  
  result=prime3();
  
  if(result)
     printf("Enter number:");
     scanf("%d",&n)
     
     result=prime4(n);
     
     if(result)
        printf("Prime\n");
     else
        printf("Not Prime\n");
        
    return 0;
}