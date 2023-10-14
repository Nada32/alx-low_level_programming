#include "main.h"

/**
 * read_textfile - Entry point
 * @filename: parameter
 * @letters: parameter
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *pf;

char *data;

data = (char *)malloc(letters);
if (data == NULL)
{
return (-1);
}

pf = fopen("filename", "r");
if ((pf == NULL) || (filename == NULL))
{
return (0);
}
else
{
while (!feof(pf))
{
fgets(data, letters, pf);
printf("%s", data);
}
fclose(pf);
}
return (letters);
}

