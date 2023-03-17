#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints a random number n and state condition is positive or negative.c
 *
 * Return: Returns 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND _ MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
