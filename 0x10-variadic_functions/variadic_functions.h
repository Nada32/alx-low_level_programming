#ifndef variadic_f
#define variadic_f
#include <stdarg.h>
#include <stdio.h>

/**
 * struct mix - Short description
 * @cr: type char pointer
 * @func: pointer to function.
 *
 * Description: Longer description
 */
typedef struct mix
{
char cr;
void (*func)();
} mix_t;
void pint(va_list b);
void pcr(va_list b);
void ps(va_list b);
void pf(va_list b);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
