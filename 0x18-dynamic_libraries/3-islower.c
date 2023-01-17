#include "main.h"

/**
 * _islower - check if a char is lowercase
 * @c: The character to be checked
 * Return: 1 if a char is lowercse, otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
