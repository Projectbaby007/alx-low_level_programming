#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Counts arguments
 * @argv: Argument variable
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
