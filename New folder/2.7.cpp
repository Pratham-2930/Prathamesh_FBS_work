#include <stdio.h>

int main(){
    int age;
    
    printf("55");
    scanf("%d",&age);
    
    if(age<12)
       printf("child");
    else if(age<=19)
       printf("Teenager");
    else if(age<=59)
       printf("Adult");
    else
       printf("senior");
       
    return 0;
}