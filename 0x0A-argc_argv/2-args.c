#include <stdio.h>

/**
 * main - this is the main function
 * @argc: this is the arg count
 * @argv: this is the vector
 * Return: this is 0 when true
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
