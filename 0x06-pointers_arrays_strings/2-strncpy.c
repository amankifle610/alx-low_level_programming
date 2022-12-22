#include "main.h"
/**
 * _strncpy - Copy a string
 * @dest: destination string
 * @src: source string
 * @n: no
 * Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++
	}
	while (i < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
