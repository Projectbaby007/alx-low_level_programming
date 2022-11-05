#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Counts arguments
 * @argv: Argument variable
 * Return: Always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
