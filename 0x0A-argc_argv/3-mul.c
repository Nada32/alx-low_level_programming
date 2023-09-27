#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: i/p argument
 * @argv: i/p argument
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
int i, j;

if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
j = 1;
for (i = 1; i < 3; i++)
j *= atoi(argv[i]);
printf("%d\n", j);
}
return (0);
}
