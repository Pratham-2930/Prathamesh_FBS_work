#include<stdio.h>

int main()
{
  int arr[100],brr[100],crr[200];
  int n1,n2,i;
  
  printf("Enter size of first array:");
  scanf("%d",&n1);
  
  printf("Enter first array elements:\n");
  for(i =0;i<n1;i++)
      scanf("%d",&n2);
      
  printf("Enter size of second array:");
  scanf("%d",&n2);
  
  printf("Enter second array elements:\n");
  for(i=0;i< n2; i++)
     crr[n1 +i] =brr[i];
   
   printf("Merged array:\n");
   
   for(i=0;i<n1 +n2;i++)
      printf("%d",crr[i]);
      
	return 0;
}