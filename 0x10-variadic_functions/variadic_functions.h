#ifndef variadic_f
#define variadic_f
#include <stdarg.h>
#include <stdio.h>

typedef struct mix
{
char cr;
va_list b;
} mix_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
