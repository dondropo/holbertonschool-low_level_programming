nclude "holberton.h"
/**
* main - Entry point
*
* Return: Always 0 (Succes)
*/
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	_putchar(alphabet);
	alphabet++;
	}
	_putchar('\n');
}
