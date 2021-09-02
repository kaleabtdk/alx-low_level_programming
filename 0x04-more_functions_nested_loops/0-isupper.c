#include "main.h"

/**
 * _isupper - starting func
 * @c: ASCII char
 * Return: 1 if its upper case
 * Description: return 1 for upper C
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
