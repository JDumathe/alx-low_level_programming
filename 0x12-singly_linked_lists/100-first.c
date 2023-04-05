#include <stdio.h>

/**
 * mlungisi - this prints before main
 */

void __attribute__ ((constructor)) mlungisi(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
