#include "holberton.h"
void print_diagonal(int n)
{
	int y;
	int x;
	if (n > 0)

	for(y = 0 ; y < n ; y++)
	{
		for(x = 0 ; x <= y ; x++)
		{
			if (x == y)
			{
			_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	
		}
	}
	else
	{
		_putchar('\n');
	}
}
