#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function.
 *
 * Return: void.
 */

void print_all(const char * const format, ...) {
    va_list args;
    va_start(args, format);

    int i = 0;
    char c;
    float f;
    char *s;
    int string_null_check = 0;

    while (format[i] != '\0') {
        if (string_null_check) {
            string_null_check = 0;
            i++;
            continue;
        }

        if (format[i] == 'c') {
            c = va_arg(args, int);
            printf("%c", c);
        } else if (format[i] == 'i') {
            i = va_arg(args, int);
            printf("%d", i);
        } else if (format[i] == 'f') {
            f = (float)va_arg(args, double);
            printf("%f", f);
        } else if (format[i] == 's') {
            s = va_arg(args, char *);
            if (s == NULL) {
                printf("(nil)");
            } else {
                printf("%s", s);
            }
            string_null_check = 1;
        }

        i++;
    }

    va_end(args);
    printf("\n");
}
