#include<stdio.h>

void primeRange(int n)
{
  int i,j,flag;
  
  printf("Prime numbers:");
  
  for(i=2;j<=i;j++)
  {
  	flag=0;
  	
  	for(j=2;j<i;j++)
  	{
  	if(i%j==0)
  	   {
  		flag=1;
  		break;
	   }
    }
    
    if(flag==0)
       printf("%d",i);
    }
}

int main()
{
	int n;
	
	printf("Enter range:");
	scanf("%d",&n);
	
	primeRange(n);
	
	return 0;
}
	
