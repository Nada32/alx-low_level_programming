#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
        int i;
        char a = 'a';
        char z = 'z';
	char e = 'e';
	char q = 'q';

        for (i = (int)(a); i < ((int)(z) + 1); i++)
	{
	if (i != (int)(e) || i != (int)(q))
        putchar((char)(i));
	}
        putchar('\n');

        return (0);

}
