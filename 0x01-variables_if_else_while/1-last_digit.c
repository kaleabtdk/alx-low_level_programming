#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - last digit
 *
 * Description: determines last digit's quality
 * Return: 0 if the program works, non for wrong
 */
int main(void)
{
	int n, LD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	LD = n % 10;
	if (n > 0)
		printf("Last Digit of %d is %d and is greater than 5\n", n, LD);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, LD);
	else if (n < 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LD);
	return (0);
}
