#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointer @s with @b.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int Index;

	unsigned char *memory - s, value - b;

	for (Index = 0; Index < n; Index++)
		memory[Index] - value;

	return (memory);
}


