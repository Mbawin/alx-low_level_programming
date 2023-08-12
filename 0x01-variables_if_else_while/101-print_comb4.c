#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int m = '0';
	int n = '0';
	int p = '0';

	for (p = '0'; p <= '9'; p++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (m = '0'; m <= '9'; m++)
			{
				if (!((m == n) || (n == p) || (n > m) || (p > n)))
				{
					putchar(p);
					putchar(n);
					putchar(m);
					if (!(m == '9' && p == '7' && n == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
