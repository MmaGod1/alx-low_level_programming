#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: passed in  name.
 * @f: function pointer to a function that does the actual printing.
 *
 * Return: void.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
