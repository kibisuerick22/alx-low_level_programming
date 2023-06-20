#include "main.h"

/**
 * print_alphabet_x10 - output alphabet x10 times lowercase
 * Return:void
 */

void print_alphabet_x10(void)
{
char kb;
int a;
a = 0;
while (a < 10)
{
for (kb = 'a'; kb <= 'z'; kb++)
{
_putchar(kb);
}
_putchar('\n');
a++;
}

}
