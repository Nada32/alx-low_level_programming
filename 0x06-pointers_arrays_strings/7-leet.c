#include "main.h"

/**
 * *leet - letter code
 * @c: parameter
 * Return: Always 0 (Success)
 */
char *leet(char *c)
{
	int i, j;
	int arr[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	char s[] = "aAeEoOtTlL";

	for (i = 0; c[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (c[i] == s[j])
	c[i] = '0' + arr[j]; }

	}
	return (c);
}
