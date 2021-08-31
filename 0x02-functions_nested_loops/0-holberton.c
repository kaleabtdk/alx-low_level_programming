#include "main.h"

/**
 * main - starts here
 * Description: prints Holberton
 * Return: 0 if it works and other if its not
 */

int main(void)
{
	int x;
	char c[] = "Holberton";

	for (x = 0; x < 9; x++)
	{
		_putchar(c[x]);
	}
	_putchar('\n');
	return (0);
}

