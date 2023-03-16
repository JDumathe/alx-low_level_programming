#include <stdio.h>

/**
 * main - this is the main function
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: this is 0 when true
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
