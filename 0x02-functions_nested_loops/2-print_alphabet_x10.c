#include "main.h"

/**
 * print_alphabet_x10 - print function
 *
 * Return: x10 a-z
 *
 */

void print_alphabet_x10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
