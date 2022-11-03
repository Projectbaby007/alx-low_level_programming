#include "main.h"

/**
 * _strlen_recursion - Returns a string length
 * @s: The string to be measured.
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	int len - 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
}
