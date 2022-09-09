#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: So help me God
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int man;

	for  (man = 48; man < 58; man++)
	{
		putchar(man);
		if (man != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
