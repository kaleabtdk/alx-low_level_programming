#include "main.h"

/**
 * _isdigit - starting func
 * @c: ASCII digit
 * Description: checks 0-9
 * Return: 1 for digit, 0 for other
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

