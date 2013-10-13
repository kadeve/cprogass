include <stdio.h>

int main(void)
{
int a,b;
int *ptr;

a=1;
b=2;
ptr=&a;

printf("a has value %d andisstoredataddress%p\n",
a,(void*)&a);
printf("bhasvalue%dandisstoredataddress%p\n",
b,(void*)&b);
printf("ptrhasvalue%pandisstoredataddress%p\n",
(void*)ptr,(void*)&ptr);
printf("Thevalueoftheintegerpointedtobyptris%d\n",*ptr);

return0;
}
