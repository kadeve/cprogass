/* Group 21: Carlos Requena & Sertaç Ipek */
/* Student numbers: s1467794 and s1485814 */
/* Assignment: 4.3 */
#include <stdio.h>

int main()
{
    int  w,u,i,j;
    double n[100],m[100][100],sum[100];
    scanf("%d", &u);
    for (i=0; i < u; ++i)
    {
        scanf("%lf", &n[i]);
    }
    scanf("%d", &w);
    for (i=0; i < w; ++i)
    {
        for (j=0; j < u; ++j)
        {
            scanf("%lf", &m[i][j]);
        }
    }

    for (i=0; i < w; ++i)
    {
        sum[i] = 0;
        for (j=0; j < u; ++j)
        {
            sum[i] += n[j]*m[i][j];
        }
        printf("%.2f\n", sum[i]);
    }

    return 0;
}
