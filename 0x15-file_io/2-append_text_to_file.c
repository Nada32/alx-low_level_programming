#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename: parameter
 * @text_content: parameter
 * Return: Always 0.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int len;
FILE *pf;

len = 0;

pf = fopen("filename", "a");
while (text_content[len] != '\0')
len++;

if ((pf == NULL) || (filename == NULL))
return (-1);
else
{
fprintf(pf, "%s", text_content);
fclose(pf);
}
return (1);
}

