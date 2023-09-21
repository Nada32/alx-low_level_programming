#include "3-calc.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int *_p(char *a)(int, int)
{
int i;
t_mix m[] = {{"+", op_add},{"-", op_sub},{"*", op_mul},{"/", op_div},{"%", op_mod}};
	
for (i = 0; i < 5; i++)
{
if (a == m[i].c)
return (m[i].func);
}
return (NULL);

}
