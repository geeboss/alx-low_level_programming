#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: a program that checks for lower case
 * @c: is the int value to be compared with ASCII value
 * author: Gee Boss
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
