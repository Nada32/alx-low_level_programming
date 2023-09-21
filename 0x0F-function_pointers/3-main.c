#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument input amount
 * @argv: command line inputs
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
char z = argv[2][0];
int zz;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if ((z != '-' && z != '+' &&
z != '/' && z != '*' && z != '%')
|| argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
if (atoi(argv[3]) == 0 && (z == '/' || z == '%'))
{
printf("Error\n");
exit(100);
}
zz = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", zz);
return (0);
}
