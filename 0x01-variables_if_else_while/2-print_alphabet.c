#include <stdlib.h>
#include <time.h>
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

	for (i = (int)(a); i < ((int)(z) + 1); i++)
	{
		putchar((char)(i));	
	}	

	return (0);

}
