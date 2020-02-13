#include "holberton.h"
/**
  *more_numbers- print numbers from 0 to 14 10 times
  *
  */
void more_numbers(void)
{
	int n;
	int a;

	for (n = 0 ; n <= 9 ; n++)
	{
		for (a = 0 ; a <= 14 ; a++)
		{
		if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
				
			_putchar((a % 10) + '0');
		
		}				
		_putchar('\n');
	}
}
