#include "main.h"

/**
 * times_table - starting function
 * Return: always 0
 */

void times_table(void)
{
	int k, a, l;

	for (k = 0; k <= 9; k++)
	{
		_putchar('0');
		for (a = 1; a <= 9; a++)
		{
			l = k * a;
			_putchar(',');
			_putchar(' ');

			if (l <= 9)
			{
				_putchar(' ');
				_putchar(l + '0');
			}
			else
			{
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
	_putchar('\n');
	}
}

