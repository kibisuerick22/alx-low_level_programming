#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
		putchar(x);
	for (x = 97; x < 103; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
