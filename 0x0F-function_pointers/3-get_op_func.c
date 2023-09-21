#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Entry point
 * @s: parameter
 * Return: Always 0.
 */
int (*get_op_func(char *s))(int, int)
{
int i;

op_t ops[] = {{"+", op_add}, {"-", op_sub},
{"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};

i = 0;
while (i < 5)
{
if (s[0] == ops[i].op[0])
return (ops[i].f);
i++;
}
return (NULL);

}
