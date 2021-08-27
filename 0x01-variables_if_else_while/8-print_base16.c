#include <stdio.h>

/**
 * main - starting point
 * Description: print base16
 * Return: 0 if it work, other if it didn't
 */
int main(void)
{
	int n;
	char c;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
