#include <stdio.h>
#include  <stdlib.h>
#include <time.h>
/**
*main - C variables
*Description- C variable
*Return 0
*/
int main(void)
{
int n;

srand(time(0));

n = rand() - RAND_MAX / 2;
int last = n % 10;

if (n < 6)
{
printf("last digit of %d is %d and is less than 5 and not 0\n", n, last);
}
else if (n > 5)
{
printf("last digit of %d is %d and greater than 5\n", n, last);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
return (0);
}
