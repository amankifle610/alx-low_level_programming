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
	int len = 0;
	int i;

	while (dest[len])
		len++;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
