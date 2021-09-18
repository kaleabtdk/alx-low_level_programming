#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - returns 1 if c is a lowercase letter
 * @c: the character to check
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _isalpha - returns 1 if c is a letter
 * @c: the character to check
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/**
 * _abs - returns the absolute value of x
 * @x: parameter
 *
 * Return: the distance from 0 to x
 */
int _abs(int x)
{
	return (x < 0 ? 0 - x : x);
}

/**
 * _isupper - returns 1 if c is an uppercase letter, else 0
 * @c: the character to check
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isdigit - returns 1 if c is a digit, else 0
 * @c: the character to check
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - gets the length of s
 * @s: char array
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++ != '\0')
		i++;
	return (i);
}

/**
 * _puts - prints str
 * @str: string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}

/**
 * _strcpy - copies string from src to dest
 * @dest: array to copy to
 * @src: array to copy from
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	register char *dest_tmp = dest;

	while ((*dest_tmp++ = *src++))
		continue;
	*dest_tmp = '\0';

	return (dest);
}

/**
 * _atoi - converts s to an integer
 * @s: string to convert
 *
 * Return: s as an int
 */
int _atoi(char *s)
{
	int num = 0;
	char negative = 0;
	char allow_any = 1;

	while (*s != '\0' && (allow_any || (*s >= '0' && *s <= '9')))
	{
		if (*s >= '0' && *s <= '9')
		{
			allow_any = 0;
			num = num * 10 + (negative ? -(*s - '0') : (*s - '0'));
		}
		else if (*s == '-')
			negative = !negative;
		s++;
	}

	return (num);
}

/**
 * _strcat - concats src to dest
 * @dest: array to start with
 * @src: array to copy from
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_tmp = dest;

	while (*dest)
		++dest;
	while ((*dest++ = *src++))
		continue;
	return (dest_tmp);
}

/**
 * _strncat - concats src to dest
 * @dest: array to start with
 * @src: array to copy from
 * @n: max bytes to copy
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_tmp = dest;

	while (*dest)
		++dest;
	while (n-- && (*dest = *src++))
		++dest;
	if (n == -1)
		*dest = '\0';

	return (dest_tmp);
}

/**
 * _strcmp - compares s1 with s2
 * @s1: a string
 * @s2: a string
 *
 * Return: difference of the first non-matching character pair
 */
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (*s1 && *s2 && !(diff = *s1++ - *s2++))
		continue;

	return (diff);
}

/**
 * _memset - fills s with b
 * @s: array to fill
 * @b: byte to fill with
 * @n: size of s
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s_tmp  = s;

	while (n-- > 0)
		*(s++) = b;
	return (s_tmp);
}

/**
 * _memcpy - copies src array to dest array
 * @dest: array to copy to
 * @src: array to copy from
 * @n: size of src
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_tmp = dest;

	while (n-- > 0)
		*dest++ = *src++;
	return (dest_tmp);
}

/**
 * _strchr - returns a sub-array, starting from the first occurrence
 * @s: array to search
 * @c: byte to search for
 *
 * Return: an array starting with c, or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	return (*s || c == 0 ? s : 0);
}

/**
 * _strspn - gets the number of bytes from the start, which are in accept
 * @s: array to search
 * @accept: bytes to allow
 *
 * Return: the count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	char index[256] = {0};

	while (*accept)
		index[(int)*accept++] = 1;
	while (*s && index[(int)*s++])
		i++;
	return (i);
}

/**
 * _strpbrk - returns a pointer to the first of any byte of accept in s
 * @s: array to search
 * @accept: bytes to look for
 *
 * Return: pointer to the first character found, or NULL if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	char index[256] = {0};

	while (*accept)
		index[(int)*accept++] = 1;
	while (*s && !index[(int)*s])
		++s;
	return (*s ? s : 0);
}

/**
 * _strstr - returns a pointer to where needle occurs in haystack
 * @haystack: string to search in
 * @needle: string to search for
 *
 * Return: a pointer to needle in haystack, or NULL if it isn't found
 */
char *_strstr(char *haystack, char *needle)
{
	char *haystack_tmp = haystack, *needle_tmp = needle;

	for (; *haystack; haystack = ++haystack_tmp, needle = needle_tmp)
	{
		while (*needle && *haystack && *needle == *haystack)
			needle++, haystack++;
		if (!*needle)
			return (haystack_tmp);
	}
	return (0);
}
