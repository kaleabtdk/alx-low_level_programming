#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the first n elements of array: a
 * @a: array to print
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	while (n-- > 0)
		printf(n == 0 ? "%d" : "%d, ", *a++);
	putchar('\n');
}
