#include "main.h"
#include <stdlib.h>

/**
 * argstostr - this concatenates the arguments entered
 * @ac: this is the argument count
 * @av: this is the argument vector
 * Return: this is 0 when true
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	int i;
	int total_len = 0;

	for (i = 0; i < ac; i++)
	{
		int j = 0;
		while (av[i][j] != '\0')
		{
			total_len++;
			j++;
		}
		total_len++;
	}
	char *result;

	result = malloc((total_len + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	int k = 0;

	for (i = 0; i < ac; i++)
	{
		int j = 0;

		while (av[i][j] != '\0') {
			result[k] = av[i][j];
			k++;
			j++;
		}
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';

	return (result);
}
