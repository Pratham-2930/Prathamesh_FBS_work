#include<stdio.h>

void greatest(int a,int b,int c)
{
	int max;
	
	if(a>b)
	{
		if(a>c)
		  max=a;
		else
		  max=c;
	}
	else
	{
		if(b<c)
		  max=b;
		else
		  max=c;
	}
	
	printf("Greatest number=%d",max);
}

int main()
{
	int a,b,c;
	
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	
	greatest(a,b,c);
	
	return 0;
}
  