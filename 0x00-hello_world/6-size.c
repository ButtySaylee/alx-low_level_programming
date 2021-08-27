#include <stdio.h>

/**
 * main - print the size of data types
 * along with a new line
 * Return: return always 0 on success
 */

int main(void)
{
	printf("Size of int: %d bytes\n", sizeof(int));
	printf("Size of float: %d bytes\n", sizeof(float));
	printf("Size of char: %d byte\n", sizeof(char));
	printf("Size of long int: %d byte\n", sizeof(long int));
	printf("Size of long long int: %d byte\n", sizeof(long long int));

	return (0);
}
