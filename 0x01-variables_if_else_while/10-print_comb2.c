#include <stdio.h>
/**
*main - C variables
*Description: C variables
*Return: 0
*/
int main(void)
{
int num;
int b, c;
num = 0;
while (num < 100)
{
b = num / 10;
c = num % 10;
putchar(b + '0');
putchar(c + '0');
if (num < 99)
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
