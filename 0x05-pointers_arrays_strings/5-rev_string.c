#include "main.h"

/**
 * rev_string - reverses s
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len = 0;

	while (*s++ != '\0')
		len++;
	s -= len + 1;
	for (i = 0; i < len / 2; i++)
	{
		char tmp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
