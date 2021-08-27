#include <stdio.h>

/**
 * main - starting
 * Description: two digit combination
 * Return: 0 if it works and other it it didn't
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (y > x)
			{
				if (!(x == '0' && y == '1'))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(x);
				putchar(y);
			}
		}
	}
	putchar('\n');
	return (0);
}
