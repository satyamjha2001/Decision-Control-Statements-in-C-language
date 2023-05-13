#include<stdio.h>
int main() {
int a,b,c;
printf("Enter the three sides of triangle: ");
scanf("%d%d%d",&a,&b,&c);
if((a+b>c) && (b+c>a)&&(a+c>b))
printf("\nIt is a valid triangle.");
else
printf("\nIt is not a valid triangle.");
return 0;
}