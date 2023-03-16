#include <stdio.h>

/**
 * main - this is the main function
 * @argc: this is the count
 * @argv: this is the vector
 * Return: this is 0
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error")
		return (-1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
