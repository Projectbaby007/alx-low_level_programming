#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
<<<<<<< HEAD
		len++;
=======
	len++;
>>>>>>> 4d3f4811916d6fc477d85213ceb912ce36a9fa2d

	while (i < len && f == 0)
	{
		if (s[i] == ' ')
<<<<<<< HEAD
			++d;
=======
		++d;
>>>>>>> 4d3f4811916d6fc477d85213ceb912ce36a9fa2d

		if (s[i] >= '0' && s[i] <= '0')
		{
			digit = s[i] - '0';
			if (d % 2)
<<<<<<< HEAD
				digit = -digit;
=======
			digit = -digit;
>>>>>>> 4d3f4811916d6fc477d85213ceb912ce36a9fa2d
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '0')

<<<<<<< HEAD
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 1 || argc > 1)
	{
		printf("Error\n");
		return (1);
	}

=======
			break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
	return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * 
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 1 || argc > 1)
	{
		printf("Error\n");
		return (1);
	}

>>>>>>> 4d3f4811916d6fc477d85213ceb912ce36a9fa2d
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
