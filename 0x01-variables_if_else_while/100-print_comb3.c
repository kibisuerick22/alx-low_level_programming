#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int z, y;

	for (z = 48; z <= 56; z++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (y > z)
			{
				putchar(z);
				putchar(y);
				if (z != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
