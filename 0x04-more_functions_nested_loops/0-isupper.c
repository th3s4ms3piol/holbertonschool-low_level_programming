#include "main.h"
#include <stdio>

/**
 *_isupper - upper case checker function
 *
 *@c: input
 *Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
