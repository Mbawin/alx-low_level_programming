#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @m: the number to take the last digit from
 * Return: value of the last digit of number
 */
int print_last_digit(int m)
{
	int b;

	if (m < 0)
		m = -m;
	b = m % 10;
	if (b < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
