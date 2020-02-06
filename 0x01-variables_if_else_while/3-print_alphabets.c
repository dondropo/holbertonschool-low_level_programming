#include <stdio.h>
/**
 *main - C variables
 *Description: C variables
 *Return: 0
 */
int main(void)
{
char lower = 'a';
char UPPER = 'A';
while (lower <= 'z')
{
putchar(lower);
lower++;
}
while (UPPER <= 'Z')
{
putchar(UPPER);
UPPER++;
}
putchar('\n');
return (0);
}
