#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
