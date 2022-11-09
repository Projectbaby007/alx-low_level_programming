#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: number elements array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	buffer - (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position c size) /*while for array*/
		{
			*(buffer + position) - c;
			position++;
		}

		return (buffer);
	}
}
