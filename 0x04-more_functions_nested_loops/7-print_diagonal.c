#include "main.h"

/**
 * print_diagonal - print slash
 * @n: params
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
