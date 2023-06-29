#include "main.h"
/**
 * _strncpy - Function that copies a string.
 * @dest: assign value
 * @src: assign value
 * @n: assign value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}

