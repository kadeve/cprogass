/*
* Student : Sertac Ipek
* Number : 1485814
* Assignment : 2.12
*/
#include <stdio.h>
void prime(int a){
    int i,result;
    i=2;
    result = 1;
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
    printf("%d\n",a);
    }
}


int main ( void )
{
int x,y,i;
scanf("%d", &x);
scanf("%d", &y);
        i=x;
        while(i <= y){
               prime(i);
            ++i;
        }
return 0;
}
