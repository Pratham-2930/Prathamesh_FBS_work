#include<stdio.h>
#include<stdlib.h>

int main()
{
 int*w;
 
 w=(int*)malloc(sizeof(int));
 
 *w=20;
 
 printf("value=%d",*w);
 
 free(w);
 
 return 0;
}