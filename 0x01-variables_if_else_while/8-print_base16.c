#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints all the numbers of base sixteen in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int gee;
	char boss;

	for (gee = 48; gee < 58; gee++)
		putchar(gee);
	for (boss = 'a'; boss <= 'f'; boss++)
		putchar(boss);
	putchar('\n');
	return (0);
}
