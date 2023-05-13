#include<stdio.h>
int main() {
int n;
printf("Enter a number: ");
scanf("%d",&n);
if(n%5==0)
printf("\nNumber is divisible by 5");
else
printf("\nNumber is not divisible by 5");
return 0;
}