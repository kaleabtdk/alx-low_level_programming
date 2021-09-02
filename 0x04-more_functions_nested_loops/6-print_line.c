#include "main.h"

/**
 * print_line - starting func
 * Description: draw straight line
 * @n: number of times a line is drawn
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
