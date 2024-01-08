#include <stdio.h>

/**
 * bfmain - executes before the main function.
 * Return: void.
 */

void __attribute__ ((constructor))
bfmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
