#include<stdio.h>
int main() {
int a;
scanf("%d",&a);
if(a==0)
printf("number is zero");
else if(a>0)
printf("number is positive");
else
printf("number is negative");
return 0;
}