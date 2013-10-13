#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static double a[10],b[10],c[10];
int n3,i=0;
void get_parameters (void)
{
    scanf("%lf %lf %lf", &a[i], &b[i], &c[i]);
}
extern void abc( double a, double b, double c);
extern double x1,x2,d;
int main(void)
{
    scanf("%d", &n3);
    while(i <= (n3-1)){
    get_parameters();
     printf("The roots of %.4fx^2 + %.4fx + %.4f are:\n", a[i],b[i],c[i]);
    abc(a[i],b[i],c[i]);
if(d == 0)
    {
     printf("x = %.4f\n", x1);
    }
    else
    {
    if (d>0)
    {
         printf("x1 = %.4f, x2 = %.4f\n", x1,x2);
    }
    else {
        printf("x1 = %.4f+%.4fi, x2 = %.4f-%.4fi\n", x1,x2,x1,x2);

    }
    }
    i++;
    }
    return 0;
}

