#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: parameter
 * @f: parameter
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
