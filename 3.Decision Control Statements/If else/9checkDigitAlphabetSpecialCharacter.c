#include<stdio.h>
int main() {
char a;
scanf("%c",&a);
if((a>='a'&&a<='z') || (a>='A'&&a<='Z'))
printf("it is a alphabet");
else if((a>='0'&&a<='9'))
printf("it is a digit");
else
printf("it is a special character");
return 0;
}