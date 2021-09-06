#include "main.h"

/**
 * print_rev - prints s in reverse
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (*s++ != '\0')
		len++;
	s -= len + 1;
	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}
