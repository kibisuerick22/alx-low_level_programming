#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char cr;

	for (cr = 'z'; cr >= 'a'; cr--)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}
