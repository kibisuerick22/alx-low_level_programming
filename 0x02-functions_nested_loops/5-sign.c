#include "main.h"

/**
 * print_sign - a function that prints the sign of a number
 * @n: number to be checked
 * Return: 1 for positive num, -1 for negative num and 0 if n is 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
