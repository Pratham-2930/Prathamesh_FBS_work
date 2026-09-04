#include <stdio.h>;
int main(){
int num,first,last;
printf("Enter a 3 digit number: 500");
scanf("%d",&num);
first=num/100;
last=num%10;
if(first==last)printf("Palindrome\n");
else printf("Not a Palindrome\n");
return 0;
}