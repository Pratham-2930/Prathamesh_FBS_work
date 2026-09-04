#include<stdio.h>

void upperlower()
{
	float basic,da,ta,hra,total;
	
	printf("Enter basic salary:");
	scanf("%f",&basic);
	
	if(basic<=5000)
	{
		da=basic*10/100;
		ta=basic*20/100;
		hra=basic*25/100;
	}
	else
	{
		da=basic*15/100;
		ta=basic*20/100;
		hra=basic*25/100;
	}
	
	total=basic+da+ta+hra;
	
	printf("Basic Salary=%.2f\n",basic);
	printf("DA=%.2f\n",da);
	printf("TA=%.2f\n",ta);
	printf("HRA=%.2f\n",hra);
	printf("Total Salary=%.2f\n",total);
}
int main()
{
	'Salary()';
	return 0;
}