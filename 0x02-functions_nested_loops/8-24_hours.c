#include "main.h"

/**
 * jack_bauer - starting func
 * Return: always 0
 */

void jack_bauer(void)
{
	int k, l, a, b;

	for (k = '0'; k <= '2'; k++)
	{
		for (l = '0'; l <= '3'; l++)
		{
			for (a = '0'; a <= '5'; a++)
			{
				for (b = '0'; b <= '9'; b++)
				{
					_putchar(k);
					_putchar(l);
					_putchar(':');
					_putchar(a);
					_putchar(b);
					_putchar('\n');
				}
			}
		}
	}
}

