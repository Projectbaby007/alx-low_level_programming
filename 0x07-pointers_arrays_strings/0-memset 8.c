#include "main.h"

/**
 * _memset - Fills memory with constant byte
 * @s: memory area
 * @b: constant bytes.
 * @n: The number of bytes to be filled.
 *
 * Return: memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}


