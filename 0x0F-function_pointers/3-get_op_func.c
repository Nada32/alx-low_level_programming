#include "3-calc.h"
#include <stddef.h>

/**
 * _p - Entry point
 * @a: parameter
 * Return: Always 0.
 */
int (*_p(char *a))(int, int)
{
int i;

op_t ops[] = {{"+", op_add}, {"-", op_sub},
{"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};

for (i = 0; i < 5; i++)
{
if (a == ops[i].c)
return (ops[i].func);
}
return (NULL);

}
