#include<stdio.h>
int main() {
char ch;
scanf("%c",&ch);
if(ch>='a'&&ch<='z')
printf("%c is lowercase",ch);
else if(ch>='A'&&ch<='Z')
printf("%c is uppercase",ch);
else
printf("not an alphabet");
return 0;
}