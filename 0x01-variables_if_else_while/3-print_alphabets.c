#include <stdio.h>

/**
 * main - starting point of a program
 *
 * Description: send a-z letters to stdout put
 * Retutn: 0 if works and other for not working
 */

int main(void)
{
	char lcase = 'a';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		putchar(lcase);
	putchar('\n');
	return (0);
}
