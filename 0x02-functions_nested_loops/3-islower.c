#include "main.h"

/**
 * _islower - starts here
 * Description: check lower case characters
 * @c: is a character in ASCII
 * Return: return 1 if c is _islower case, else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
