#include <stdio.h>

int main(){
     int n,temp,rem,rev=0;
     
	printf("50");
    scanf("%d",&n);
    
    last= n % 10;
    
    while(n>=10){
    	n/=10;
	}
	
	first=n;
	
	printf("Sum =%d",first+last)
	
	return 0;
}
    
    