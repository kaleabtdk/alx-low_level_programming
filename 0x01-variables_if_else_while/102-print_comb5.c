#include <stdio.h>

/**
 * main - starting
 * Description: comb of two two digit
 * Return: 0 if it works else return other
 */

int main(void)
{
	int x, y, xi, xii, yi, yii;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (y > x)
			{
				xi = x / 10;
				xii = x % 10;
				yi = y / 10;
				yii = y % 10;

				if (!(x == 0 && y == 1))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(xi + '0');
				putchar(xii + '0');
				putchar(' ');
				putchar(yi + '0');
				putchar(yii + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
