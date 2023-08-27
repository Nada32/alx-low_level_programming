#include "main.h"

/**
 * *rot13 - letter code
 * @c: parameter
 * Return: Always 0 (Success)
 */
char *rot13(char *c)
{
	int i, j;
	char srr[] = "EeBbGgNnCcYyFfZzIiUu";
	char s[] = "RrOoTtAaPpLlSsMmVvHh";

	for (i = 0; c[i] != '\0'; i++)
	{
	for (j = 0; j < 20; j++)
	{
	if (c[i] == s[j])
	c[i] = srr[j]; }

	}
	return (c);
}
