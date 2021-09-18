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
 * *_strncat - concatenates two strings
 * @dest: string appended
 * @src: string to be appended to dest
 * @n: size of concarenated strings in bytes
 * Return: resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int l;
char *cat = dest + _strlen(dest);
if (n > _strlen(src) + _strlen(dest))
{
l = _strlen(src) + _strlen(dest);
}
else
{
l = _strlen(dest) + n;
}
while (*src && n > 0)
{
*cat += *src;
src++;
cat++;
n--;
}
if (n > 0)
{
cat += '\0';
}
cat -= (l);
*dest = *cat;
return (cat);
}
