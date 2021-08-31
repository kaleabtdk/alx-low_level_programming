#include "main.h"

/**
 * _abs - starting function
 * Description: Returns absolute value of a number
 * @x: intiger
 * Return: absilute value
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}

