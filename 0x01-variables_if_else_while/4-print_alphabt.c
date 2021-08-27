#include <stdio.h>

/**
 * main - program starting
 *
 * Description: list alphabet except e and q
 *
 * Return: 0 if it work, else another number
 */

int main(void)
{
	char lcase = 'a';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		if (lcase != 'e' && lcase != 'q')
			putchar(lcase);
	putchar('\n');
	return (0);
}
