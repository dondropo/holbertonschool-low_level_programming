#include <stdio.h>
/**
*main - C variables
*Description: C variables
*Return: 0
*/
int main(void)
{
int num = 0;
char letters = 'a';
while (num < 10)
{
putchar(num + '0');
num++;
}
while (letters <= 'z')
{
putchar(letters);
letters++;
}
putchar('\n');
return (0);
}
