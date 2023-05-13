#include<stdio.h>
int main() {
char a;
printf("Enter any key to check digit character or special character: ");
scanf("%c",&a);
if((a>='a'&&a<='z') || (a>='A'&&a<='Z'))
printf("\nit is a alphabet");
else if((a>='0'&&a<='9'))
printf("\nit is a digit");
else
printf("\nit is a special character");
return 0;
}