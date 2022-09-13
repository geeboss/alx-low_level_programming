#include "main.h"
/**
 * print_last_digit - prints the last digits of any number
 * @n: the int value to be acted upon
 * authoer: gee boss
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
