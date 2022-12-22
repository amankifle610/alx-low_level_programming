#include "main.h"
/**
 * _strncat - concatenate
 * @dest : string
 * @src : string
 * @n : no
 * Return: string
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len])
		len++;
	for (i = 0; i < n && src[j]; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len + n + 1] = '\0';
	return (dest);
}
