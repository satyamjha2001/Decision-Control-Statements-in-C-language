#include<stdio.h>
int main() {
int n;
printf("Enter a number: ");
scanf("%d",&n);
// if(((n/2)*2)==n)
if((n&1)==0)
printf("\nNumber is even");
else
printf("\nNumber is odd");
return 0;
}