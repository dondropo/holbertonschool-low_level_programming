#include "holberton.h"
/**
 * print_last_digit - program that prints the last digit of a number
 * @l: last digit of a number
 * Return: always a
 */
void jack_bauer(void)
{
	int h;
	int m;
	int m2;
	int s;

	h = 0;
	while (h <= 2)
	{
		m = 0;
		while (m <= 9)
		{
			m2 = 0;
			while (m2 <= 5)
			{
				s = 0;
				while (s <= 9)
				{
					_putchar(h + '0');
					_putchar(m + '0');
					_putchar(':');
					_putchar(m2 + '0');
					_putchar(s + '0');
					_putchar('\n');
					s++;
				}
				m2++;
			}
			m++;
			if (h == 2 && m == 4)
				break;
		}
		h++;
	}
}
