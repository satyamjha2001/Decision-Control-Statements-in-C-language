#include<stdio.h>
int main() {
int a,b,c,d;
printf("Enter the three coefficient of  quadratic equation: ");
scanf("%d%d%d",&a,&b,&c);
d=(b*b)-(4*a*c);
if(d==0)
printf("\nRoots are real and equal");
else if(d>0)
printf("\nRoots are real and distinct");
else
printf("\nRoots are imaginary");
return 0;
}