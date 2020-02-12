#include "holberton.h"
#include "stdio.h"
/**
  *_abs - computes the absolute value of an integer
  *@a: - number to be checked
  *Return: a - absolute value of a
  */
int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
		return (a);
}
