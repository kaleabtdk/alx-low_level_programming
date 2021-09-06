#include "main.h"

/**
 * swap_int - swaps a and b
 * @a: first argument
 * @b: second argument
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
