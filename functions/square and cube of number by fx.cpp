#include<stdio.h>

void convertMinutes(int minutes)
{
  int hours,remaining;
  
  hours = minutes/60;
  remaining = minutes % 60;
  
  printf("Hours =%d\n",hours);
  printf("Remaining Minutes =%d",remaining);
}

int main()
{
	int minutes =150;
	
	convertMinutes(minutes);
	
	return 0;
}

