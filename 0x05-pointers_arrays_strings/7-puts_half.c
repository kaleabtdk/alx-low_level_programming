#include "main.h"

/**
 * puts_half - prints the later half of str
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str++ != '\0')
		len++;
	str -= len / 2 + 1;
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
