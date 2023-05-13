#include<stdio.h>
int main()
{
    const char *week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int a;
    scanf("%d",&a);
    if(a>0&&a<8)
    {
        printf("%s",week[a-1]);
    }
    else
    printf("invalid input");
    return 0;
}
// int main() {
//     int a;
//     scanf("%d",&a);
// if(a==1)
// printf("Sunday");
// else if(a==2)
// printf("Monday");
// else if(a==3)
// printf("Tuesday");
// else if(a==4)
// printf("Wednesday");
// else if(a==5)
// printf("Thursday");
// else if(a==6)
// printf("Friday");
// else if(a==7)
// printf("Saturday");
// return 0;
// }
// ***************************************************Another Method***************************************************