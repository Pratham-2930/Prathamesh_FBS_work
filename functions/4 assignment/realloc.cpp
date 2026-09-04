#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr;
	int i;
	
	ptr=(int*)malloc(3*sizeof(int));
	if (ptr==NULL)
{
	printf("Memory allocation failed");
	return 1;
}

ptr[0]=10;
ptr[1]=20;
ptr[2]=30;

printf("Before realloc:\n");
for(i=0;i<3;i++)
{
	printf("%d",ptr[i]);
}

ptr=(int*)realloc(ptr,5*sizeof(int));

if(ptr==NULL)
{
    printf("\nReallocation failed");
    return 1;
}

ptr[3]=40;
ptr[4]=50;

printf("\nAfter realloc:\n");
for(i=0;i<5;i++)
{
	printf("%d",ptr[i]);
}
free(ptr);

return 0;
}