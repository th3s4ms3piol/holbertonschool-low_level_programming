#include "main.h"
/**
 *_abs - compute value of integer
 *ab: integer input
 *Return: whole value of ab
 *
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
