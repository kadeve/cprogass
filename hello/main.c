/*
* Student : Sertac Ipek
* Number : 1485814
* Assignment : 1.3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celcius, kelvin, fahrenhiet;

    scanf("%lf", &celcius);
    kelvin = celcius + 273.15;
    fahrenhiet = (1.8 * celcius) + 32;

    printf("C\tK\tF\n");
    printf("%.2f\t%.2f\t%.2f\n", celcius, kelvin, fahrenhiet);
    return 0;
}
