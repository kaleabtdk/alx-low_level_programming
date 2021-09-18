#include "main.h"
/**
* _strlen - returns length of string
* Description: function that returns the length of a string
* @s: character whose length will be returned
* Return: length of the string
*/
int _strlen(char *s)
{
int i;
i = 0;
while (*s)
{
i += 1;
s++;
}
return (i);
}
/**
 * *_strcat - concatenates two strings
 * @dest: string appended
 * @src: string to be appended
 * Return: appended string dest
 */

char *_strcat(char *dest, char *src)
{
char *cat = dest + _strlen(dest);
int l;
l = _strlen(dest) + _strlen(src);
while (*src)
{
*cat += *src;
src++;
cat++;
}
*cat += '\0';
cat -= (l);
*dest = *cat;
return (cat);
}
