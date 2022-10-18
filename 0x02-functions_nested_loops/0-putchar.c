#include "main.h"

/**
 * main - Print _putchar, followed by a new line
 *
 * Return: 0 (success)
 */
int main(void)
{
	char *sh = "main.h"

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
