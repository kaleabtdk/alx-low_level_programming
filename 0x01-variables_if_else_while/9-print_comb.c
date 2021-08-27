#include <stdio.h>

/**
 * main - started
 * Descriprion: print numbers with comma and space
 * Return: 0 if it works, other if it didn't
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
