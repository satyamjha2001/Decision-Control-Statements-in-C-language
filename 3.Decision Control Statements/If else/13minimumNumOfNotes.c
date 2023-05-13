#include <stdio.h>
int main()
{
    int a, sum = 0;
    scanf("%d", &a);
    if (a >= 2000)
    {
        sum = a / 2000;
        a = a - sum * 2000;
        printf("2000: %d\n", sum);
    }
    if (a >= 500)
    {
        int sum1 = a / 500;
        a = a - sum1 * 500;
        printf("500: %d\n", sum1);
    }
    if (a >= 200)
    {
        int sum2 = a / 200;
        a = a - sum2 * 200;
        printf("200: %d\n", sum2);
    }
    if (a >= 100)
    {
        int sum3 = a / 100;
        a = a - sum3 * 100;
        printf("100: %d\n", sum3);
    }
    if (a >= 50)
    {
        int sum4 = a / 50;
        a = a - sum4 * 50;
        printf("50: %d\n", sum4);
    }
    if (a >= 20)
    {
        int sum5 = a / 20;
        a = a - sum5 * 20;
        printf("20: %d\n", sum5);
    }
    if (a >= 10)
    {
        int sum6 = a / 10;
        a = a - sum6 * 10;
        printf("10: %d\n", sum6);
    }
    if (a >= 5)
    {
        int sum7 = a / 5;
        a = a - sum7 * 5;
        printf("5: %d\n", sum7);
    }
    if (a >= 2)
    {
        int sum8 = a / 2;
        a = a - sum8 * 2;
        printf("2: %d\n", sum8);
    }
    if (a >= 1)
    {
        int sum9 = a / 1;
        a = a - sum9 * 1;
        printf("1: %d\n", sum9);
    }
    return 0;
}