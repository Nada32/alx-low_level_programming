#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: parameter
 * @f: parameter
 * Return: Always 0.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
