#include <stdio.h>
/**
 *main - C variables
 *Description: C variables
 *Return: 0
 */
int main(void)
{
char var = 'a';
while (var <= 'z')
{
if (var != 'q' && var != 'e')
putchar(var);
var++;
}
putchar('\n');
return (0);
}
