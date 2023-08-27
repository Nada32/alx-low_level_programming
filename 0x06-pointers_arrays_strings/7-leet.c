#include "main.h"

/**
 * *leet - letter code
 * @c: parameter
 * Return: Always 0 (Success)
 */
char *leet(char *c)
{
	int i, j, len = 0;
	int arr[10] = {4,4,3,3,0,0,7,7,1,1};
	char s[] = "aAeEoOtTlL";
	
	while (c[len] != '\0')
	len++;
	for (i = 0; i < len; i++)
	{
	for (j = 0; j < 10; j++)
	(c[i] == s[j]) ? (c[i] = '0' + arr[j]) : (c[i] = c[i]);
	}
	return (c);
}
