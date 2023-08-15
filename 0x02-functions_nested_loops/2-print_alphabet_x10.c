#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10x
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int m = 0;

	while (m < 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	_putchar(ch);
	}
	_putchar('\n');
	m++;
	}
}
