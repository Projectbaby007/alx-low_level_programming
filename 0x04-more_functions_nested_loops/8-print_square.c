#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */
void print_square(int size);
{
	if (size <= 0)
	{
		_putchar('\');
	}
	else
	{
		int i, k;

		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
