#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int i, j, ct;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	ct = 1;

	while (j > 9)
	{
		j /= 10;
		ct *= 10;
	}

	for (; ct >= 1; ct /= 10)
	{
		_putchar(((i / ct) % 10) + 48);
	}
}

