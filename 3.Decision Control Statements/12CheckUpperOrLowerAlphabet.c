#include<stdio.h>
int main() {
char ch;
printf("Enter an alphabet: ");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
printf("\n%c is lowercase",ch);
else if(ch>='A'&&ch<='Z')
printf("\n%c is uppercase",ch);
else
printf("\nnot an alphabet");
return 0;
}