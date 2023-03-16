#include <stdio.h>

/**
 * main - this is the main function
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: this is 0 when true
 */

int main (int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	/*__attribute__((unused)) argv;*/
	return (0);
}
