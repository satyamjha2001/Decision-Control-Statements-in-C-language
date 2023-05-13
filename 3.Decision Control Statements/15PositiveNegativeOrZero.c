#include<stdio.h>
int main() {
int a;
printf("Enter a number: ");
scanf("%d",&a);
if(a<0)
printf("\n %d is negative number",a);
else if(a>0)
printf("\n %d is positive number",a);
else
printf("\n %d is zero number",a);
return 0;
}