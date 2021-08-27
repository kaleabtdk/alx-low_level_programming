#include <stdio.h>


/**
 * main - starting point of the program
 *
 * Description: prints a sample string
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	char lcase = 'a';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		putchar(lcase);
	putchar('\n');
	return (0);
}
