#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 * @p: The number to be checked
 * Return:  value of the last digit
 */

int print_last_digit(int p)

{
	int tail;

	tail = p % 10;
	if (tail < 0)
	{
	tail = tail * -1;
	}
	_putchar(tail + '0');
	return (tail);
}
