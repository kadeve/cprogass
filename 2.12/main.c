/*
* Student : Sertac Ipek
* Number : 1485814
* Assignment : 2.12
*/
#include <stdio.h>
#include <math.h>

int main ( void )
{
    int a,i,result;
    i=2;
    result = 1;
    scanf("%d", &a);
    if(a>=2){
        while(i<a){
            if(a % i == 0){
                result = 0;
            break;
            }
            ++i;
        }
    }
    else{
        result = 0;
    }
    if(result == 1){
    printf("%d is a prime number\n",a);
    }
        else
 {
     printf("%d is not a prime number\n",a);
}
return 0;
}
