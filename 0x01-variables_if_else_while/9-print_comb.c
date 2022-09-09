#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program to print all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int gee;

	for (gee = 48; gee < 58; gee++)
	{
		putchar(gee);
		if (gee != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
