#include "main.h"

/**
 * _strcmp - cmp
 * @s1: parameter
 * @s2: parameter
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
int i, m, b, n, k, len1 = 0, len2 = 0, z = 0, y = 0, x = 0;

while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (len1 > len2)
m = len1;
else if (len1 <= len2)
m = len2;
for (i = 0; i < m; i++)
{
if (s1[i] == s2[i])
z++;
else if (s1[i] > s2[i])
y = (int)(s1[i]) + y;
else if (s1[i] < s2[i])
x = (int)(s2[i]) + x; }
if (x > y)
{
for (i = 0; i < m; i++)
{
break;
}
k = n;
}
return (k);
}
