#include <stdio.h>
/**
* main - Entry
* Return: Always 0
*/
int main(void)
{
	printf("Size of a char: %1 byte(s)\n", sizeof(char));
	printf("Size of a long int: %4 byte(s)\n", sizeof(int));
	printf("Size of a long int: %8 byte(s)\n", sizeof(long int));
	printf("Size of a lonng long int: %8 byte(s)\n", sizeof(long long int));
	printf("Size of a float: %4 byte(s)\n", sizeof(float));
	return (0);
}
