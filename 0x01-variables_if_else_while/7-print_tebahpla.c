#include <stdio.h>

/**
 * main - starting point
 * Description: reverse alphabet
 * Return: 0 if it works and other if it didn't
 */

int main(void)
{
	char lcase;

	lcase = 'z';

	for (lcase = 'z'; lcase >= 'a'; lcase--)
		putchar(lcase);
	putchar('\n');
	return (0);
}
