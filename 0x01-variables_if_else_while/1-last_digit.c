#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting point of the program
 *
 * Description: prints the status of the last digit of n
 * Return: 0 if program executes properly, else a non-zero number
 */
int main(void)
{
	int n;
	char last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else
		printf(
			"Last digit of %d is %d and is less than 6 and not 0\n",
			n, last_digit);

	return (0);
}
