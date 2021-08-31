#include "main.h"

/**
 * _isalpha - starting func
 * Description: determines whether the character is alphabet or not
 * @c: ASCII character code
 * Return: 1 if its a char and 0 if its else
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

