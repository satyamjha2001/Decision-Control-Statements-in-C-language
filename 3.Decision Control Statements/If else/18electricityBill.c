#include<stdio.h>
int main() {
float unit,amt=0,temp;
scanf("%f",&unit);
if(unit>250)
{   temp=unit-250;
    amt+=temp*1.5;
    unit=250;
}
if(unit>150)
{
    temp=unit-150;
    amt+= temp*1.2;
    unit=150;
}
if(unit>50)
{
    temp=unit-50;
    amt+=temp*0.75;
    unit=50;
}
if(unit>0)
{
    amt+=unit*0.5;
    unit=0;
}
amt+=amt*0.2;
printf("%.2f",amt);
return 0;
}