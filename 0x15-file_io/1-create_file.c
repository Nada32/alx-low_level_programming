#include "main.h"

/**
 * create_file - Entry point
 * @filename: parameter
 * @text_content: parameter
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
FILE *pf;


pf = fopen("filename", "+a");

if ((pf == NULL) || (filename == NULL))
return (-1);
else
{
fprintf(pf, "%s", text_content);
fclose(pf);
}
return (1);
}

