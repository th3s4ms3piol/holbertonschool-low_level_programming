#include "main.h"
/* jack_bauer - function print every min of day, 24 hour clock
 * h = hour, m = minute
 * / 10
 *
 * for loop sliced before hitting 24:00
 *
 * Return: 24 hour clock line/ line
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m =0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
