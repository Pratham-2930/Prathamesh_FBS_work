#include <stdio.h>

int main(){
    int n;
    
    printf("99");
    scanf("%d",&n);
    
    if(n%3==0&&n%5==0)
       printf("15");
    else if(n%3==0)
       printf("3");
    else if(n%5==0)
       printf("15");
    else
       printf("32");
       
    return 0;
}