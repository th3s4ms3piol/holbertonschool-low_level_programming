#include "main.h"
/**
 * _isalpha - check it
 * @c: singular putter
 * Return: 1 = c <> - 0 though
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
