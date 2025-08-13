#include <stdio.h>
int main (void)
{
int count = 10;
int *ip;
ip = &count;
printf ("count = %i, *ip = %i\n", count, *ip);
*ip=4;
printf ("count = %i, *ip = %i\n", count, *ip);
return 0;
}
