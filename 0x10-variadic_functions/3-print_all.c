#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Entry point
 * @format: parameter
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i, j, sum;

va_start(args, format);

mix_t m[] = {{'c', va_arg(int)}, {'i', va_arg(int)},
{'s', va_arg(char *)}, {'f', va_arg(double)}};
j = 0;
sum = 0;
i = 0;
while (j < 4)
{
while (format[i] != '\0')
{
if (format[i] == m[j].cr)
printf("%va_list", m[j].b);
i++;
}
j++;
}
va_end(args);
return (sum);
}
