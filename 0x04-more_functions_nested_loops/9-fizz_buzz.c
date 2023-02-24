#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - this is the main function
 *
 * Return: this is 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ",i);
		}
	}
	printf("\n");
	return (0);
}
