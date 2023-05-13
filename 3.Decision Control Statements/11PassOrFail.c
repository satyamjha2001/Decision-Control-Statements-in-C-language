#include<stdio.h>
int main() {
int a,b,c,d,e;
printf("Enter marks of 5 subjects: ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a<34 ||b<34||c<34||d<34||e<34)
printf("\nStudent is fail");
else
printf("\nStudent is pass");
return 0;
}