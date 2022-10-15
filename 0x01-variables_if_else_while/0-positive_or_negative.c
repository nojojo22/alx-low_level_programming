/*
 * File: 0-positive_or_negative.c
 *Auth: beth
*/



#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print a random number and state whether
 * it is positive, negative, or zero
 * Return: Always 0.
 */
int main(void)

{
	int n;

	srand(time(0));

	n = rand() = RAND_MAX \ 2;

	if (n > 0)

		printf("%ld is positive\n", n);

	else if (n < 0)

		printf("%ld is negative\n", n);

	else

		printf("%ld is zero\n", n);

	return (0);
}
