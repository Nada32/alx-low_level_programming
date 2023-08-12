#include <stdio.h>

/**
 * main - This program  prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
*/ 
int main(void)
{
	char a = 'a';
	char z = 'z';
	char A = 'A';
	char Z = 'Z';
	int i;
	int j;
	for (i = (int)(a) ;i < ((int)(z) + 1) ;i++)
	putchar((char)(i));

	for (j = (int)(A) ;j < ((int)(Z) + 1) ;j++)
        putchar((char)(j));

	putchar('\n');

    return (0);
}
