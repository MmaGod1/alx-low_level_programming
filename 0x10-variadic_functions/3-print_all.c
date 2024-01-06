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
	int i = 0;
	char c;
	int int_val;
	float float_val;
	char *str, format_char;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		format_char = format[i];
		if (format_char == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format_char == 'i')
		{
			int_val = va_arg(args, int);
			printf("%d", int_val);
		}
		else if (format_char == 'f')
		{
			float_val = (float)va_arg(args, double);
			printf("%f", float_val);
		}
		else if (format_char == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
