#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: Counts arguments
 * @argv: Arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
/*Declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*WHILE - print each argument*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}

	return (0);
}
