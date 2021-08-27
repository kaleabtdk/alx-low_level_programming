#include <stdio.h>

/**
 * main - jmare
 * Description: glatse
 * Return: ftsame
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (z > y && y > x)
				{
					if (!(x == '0' && y == '1' && z == '2'))
					{
						putchar(',');
						putchar(' ');
					}
					putchar(x);
					putchar(y);
					putchar(z);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
