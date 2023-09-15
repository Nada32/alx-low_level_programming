#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Entry point
 * @separator: parameter
 * @n: parameter
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *m;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	m = va_arg(args, char*);
	if (m == NULL)
	printf("(nil)");
	else
	printf("%s", m);
	if ((i < n - 1) && (separator != NULL))
	printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
