#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_Index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: Index of the first element for which
 * the cmp function doesn't return 0, or -1 if no match is found
 * or size is negative
 */
nt int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
