#include "variadic_functions.h"
#include <stdarg.h>

/**
 * pint - Entry point
 * @b: parameter
 * Return: Always 0.
 */
void pint(va_list b)
{
int bb;

bb = va_arg(b, int);
printf("%d", bb);
}

/**
 * pcr - Entry point
 * @b: parameter
 * Return: Always 0.
 */
void pcr(va_list b)
{
char bb;
bb = va_arg(b, int);
printf("%c", bb);
}

/**
 * ps - Entry point
 * @b: parameter
 * Return: Always 0.
 */
void ps(va_list b)
{
char *bb;

bb = va_arg(b, char *);
if (!bb)
printf("(nil)");
printf("%s", bb);
}

/**
 * pf - Entry point
 * @b: parameter
 * Return: Always 0.
 */
void pf(va_list b)
{
float bb;

bb = va_arg(b, double);
printf("%f", bb);
}



/**
 * print_all - Entry point
 * @format: parameter
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
va_list args;
int i, j;
char *x, *y;
mix_t m[] = {{'c', pcr}, {'i', pint},
{'s', ps}, {'f', pf}};

va_start(args, format);
i = 0;
x = "";
y =  ", ";
while (format[i] != '\0' && format != NULL)
{
j = 0;
while (j < 4)
{
if (format[i] == m[j].cr)
{
printf("%s", x);
m[j].func(args);
x = y;
}
j++;
}
i++;
}
va_end(args);
}
