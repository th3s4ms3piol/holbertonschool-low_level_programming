#include "main.c"
/**
 *print_last_digit - prtins the last digit
 *@nld: last
 *Return: last digit returned
 */
int print_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);
	{
		pld = (-1 * pld);
	}

	_putchar(pld + '0');
	return (pld);
}
