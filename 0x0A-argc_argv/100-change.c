#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print out the change that needs to given
 * @argc: number of arguments to be passed
 * @argv: number of variables to calculate
 * Return: always 0 for sucess
 */

int main(int argc, char **argv)
{
int z, x;

if (argc < 2)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
for (z = 0; x > 0; z++)
{
if (x - 25 >= 0)
x = x - 25;
else if (x - 10 >= 0)
x = x - 10;
else if (x - 5 >= 0)
x = x - 5;
else if (x - 2 >= 0)
x = x - 2;
else if (x - 1 >= 0)
x = x - 1;
}
printf("%d\n", z);
return (0);
}
