#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, x, y,d,imag;
    scanf("%f%f%f", &a, &b, &c);
    d = (b*b) - (4 * a * c);
     if (d > 0)
    {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
        printf("%.2f,%.2f", x, y);
    }
    else if (d == 0)
    {
        x = y = (-b) / (2 * a);
        printf("x=%.2f,y=%.2f", x, y);
    }
    else if (d < 0)
    {
        x = y = -b / (2 * a);
        imag = sqrt(-d) / (2 * a);

        printf("%.2f + i(%.2f) and %.2f - i(%.2f)", 
                x, imag, y, imag);
    }
    return 0;
}