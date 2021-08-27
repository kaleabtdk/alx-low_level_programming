#include <stdio.h>


/**
 * main - starting point of the program
 *
 * Description: prints a sample string
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	char lcase = 'a', ucase = 'A';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		putchar(lcase);
	for (ucase = 'A'; ucase <= 'Z'; ucase++)
		putchar(ucase);
	putchar('\n');
	return (0);
}
