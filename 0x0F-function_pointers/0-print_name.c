#include "function_pointers.h"

/**
 * print_name - Entry point
 * @name: parameter
 * @f: function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
