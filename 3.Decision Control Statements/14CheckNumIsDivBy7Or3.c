#include<stdio.h>
int main() {
int a;
scanf("%d",&a);
if((a%7==0) || (a%3==0))
printf("yes");
else
printf("no");
return 0;
}