#include "main.h"

/**
 * binary_to_uint - binary
 * @b: parameter
 * Return: Always 0 (Success)
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int y = 0;
int i;
unsigned int len = 0;

while (b[len] != '\0')
len++;
for (i = len - 1; i >= 0; i--)
{
if (!(b[i] > ('0' - 1) && b[i]  < ('1' + 1)))
return (0);

unsigned int z = 1;
unsigned int zz = 0;
int j = 0;

for (j = 0; j < len - i - 1; j++)
{
z = 2 * (unsigned int)(b[i] - '0') * z;
zz = z;
}
y = zz + y;
}
return (y);
}
