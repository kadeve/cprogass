
/*
* Student : Sertac Ipek
* Number : 1485814
* Assignment : 1.4
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int bN, i;
    double bS, ba, br, bfff;
    scanf("%lf%d%lf", &ba, &bN, &br);
    bS = 0;
    bfff = 0;
    for(i=0; i <= bN; ++i){
        bfff = pow(br,i);
        bS += ba * bfff;
    }
    printf("%.2f\n", bS);
    return 0;
}
