#include "main.h"

/**
 * print_sign - starting func
 * Description: prints the sign of  a number
 * @n: number
 * Return: 1 for +ve, 0 for 0 and -1 for -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}

