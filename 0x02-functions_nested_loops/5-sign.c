#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @a: the integer to check
 * Return: 1 for positive number, -1 for negative number or 0 for anything else
 */

int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	} else if (a == 0)
	{
		_putchar(48);
		return (0);
	} else if (a < 0)
	{
		_putchar('-');
	}
		return (-1);
}
