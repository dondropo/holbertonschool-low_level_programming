nclude "holberton.h"

/**
* print_square - Print a square of n length
* @size: Length of square
*
* Return: Nothing
*/
void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0 ; a < size ; a++)
		{
			for (b = 0 ; b < size ; b++)
			{
				_putchar('#');
				if ((size - b) == 1)
					_putchar('\n');
			}
		}
	}
	else
		 _putchar('\n');
}
