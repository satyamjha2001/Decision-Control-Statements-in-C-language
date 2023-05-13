#include<stdio.h>
int main() {
int n;
printf("Enter a number: ");
scanf("%d",&n);
if(n>99 && n<1000)
printf("\n%d is a 3 digit number",n);
else
printf("\n%d is not a 3 digit number",n);
return 0;
}