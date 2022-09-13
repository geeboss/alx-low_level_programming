#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an interger
 * An: The int to be operated upon
 * author: Gee boss
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
	{
		n *= -1;
		return (n);
	}
}
