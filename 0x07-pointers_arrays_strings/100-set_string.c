#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to a pointer that points to a char variable.
 * @to: target pointer.
 *
 * Return: void.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
