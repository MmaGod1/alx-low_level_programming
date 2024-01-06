#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	char c;
	int i = 0;
	float f = 0.0;
	char *s = NULL;
	int count = 0;

	va_list args;
	va_start(args, format);
	
	while ((c = format[count]) != '\0' && count < 9)
	{
		switch (c)
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
		}
		break;
	}
	count++;
	va_end(args);
	printf("\n");
}
