#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
int i, s = 0, ss = 0;
char *c;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
c = argv[i];
while (*c != 0)
{
if (*c < 47 || *c > 57)
{
printf("Error\n");
return (1);
}
c++;
}
ss = atoi(argv[i]);
s += ss;
}
printf("%d\n", s);
}
else
printf("%d\n", 0);
return (0);
}
