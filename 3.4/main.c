#include <stdio.h>
#include <stdlib.h>
int gcd(int a , int b)
{
int r,c,d,e;

r=a%b;
e=b;

c=e;
while (r!=0){
    c=r;
    r= a%r;
}
    printf("%d", c);
}

int main(void)
{
int x,y;
scanf("%d", &x);
scanf("%d", &y);
gcd(x,y);
return 0;
}
