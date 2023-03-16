#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - this is the main function
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: this is 0 when true
 */

int main(int argc, char *argv[])
{
	int total = 0;
	int i, j, num;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(arg);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		total += num;
	}
	printf("%d\n", total);
	return (0);
}
