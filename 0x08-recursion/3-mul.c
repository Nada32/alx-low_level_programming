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
int z;
if (argc < 2)
{
printf("Error\n");
return (1);
}
z = (int) *argv[1] * (int) *argv[2];
printf("%d\n", z);
return (0);
}
