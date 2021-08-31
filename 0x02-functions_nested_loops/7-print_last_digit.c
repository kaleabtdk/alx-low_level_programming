#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: input number as an integer
 * Return: last digit
 */

int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		_putchar(-ld + '0');
		return (-ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
	_putchar('\n');
}
