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
	int i = 0, printed_values = 0, count = 0;
	float f = 0.0;
	char *s = NULL;
	va_list args;

	va_start(args, format);
	while ((c = format[count]) != '\0' && count < 9)
	{
		if (printed_values > 0 && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		switch (c)
		{
			case 'c':
				i = va_arg(args, int);
				printf("%c", i);
				printed_values++;
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				printed_values++;
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				printed_values++;
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				printed_values++;
				break;
		}
		count++;
	}
	va_end(args);
	printf("\n");
}
