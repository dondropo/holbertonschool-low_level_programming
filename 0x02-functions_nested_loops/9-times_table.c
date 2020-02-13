#include "holberton.h"
/**
 * times table - prints the 9 times table
 * Return: no
 */
void times_table(void)
{
	int n;
	int m;
	int x;
	int s;
	int result;

	for(n = 0 ; n <= 9 ; n++ )
	{
		for(m = 0 ; m <=9 ; m++)
		{
			result = n * m;
			x = result / 10;
			s = result % 10;

			if (m == 0)
			{
				_putchar(s + '0');
			}
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(s + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x + 0);
				_putchar(s + 0);
			}
		}
		_putchar('\n');
	}
}
