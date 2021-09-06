#include "main.h"

/**
 * _strlen - gets the length of s
 * @s: char array
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++ != '\0')
		i++;
	return (i);
}
