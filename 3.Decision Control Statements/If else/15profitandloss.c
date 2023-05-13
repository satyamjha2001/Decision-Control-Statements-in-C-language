#include<stdio.h>
int main() {
float cp,sp,profit=0,loss=0;
printf("Enter cost price and Selling price");
scanf("%f%f",&cp,&sp);
if((sp-cp)>0)
{profit=sp-cp;
printf("profit = %.2f",profit);}
else if((sp-cp)<0)
{loss=cp-sp;
printf("loss = %.2f",loss);}
else
printf("no loss and no profit");
return 0;
}