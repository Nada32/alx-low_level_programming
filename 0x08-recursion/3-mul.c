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
int mult = 0;

if (argc != 3)
{
printf("Error\n");
return (1);
}
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%i\n", mult);
return (0);
}
