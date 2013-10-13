#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double calculate_discriminant(double a, double b,double c)
{
    return b*b-4*a*c;
}
double x1, x2,d;
void abc( double a, double b, double c)
{
    d = calculate_discriminant(a, b, c);
if(d == 0)
    {
    x1 = (-b+sqrt(-d))/2*a;
    }
    else
    {
    if (d>0)
    {
        x1 = (-b+sqrt(d))/2*a;
        x2 = (-b-sqrt(d))/2*a;
    }
    else {
        x1 = (-b)/(2*a);
        x2 = (sqrt(-d))/(2*a);

    }
    }
}

