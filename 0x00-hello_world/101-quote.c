#include <unistd.h>

/**
 * main - this is the main function and stores all the code
 *
 * Return: this is always 0 if true
*/

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, str, sizeof(str) - 1);
	return (1);
}
