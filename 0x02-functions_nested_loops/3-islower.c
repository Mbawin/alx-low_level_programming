#include "main.h"
/**
 * _islower - check if character is lowercase
 * @m: The character to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int m)
{
	if (m >= 'a' && m <= 'z')
	{
	return (1);
	}
	return (0);
}
