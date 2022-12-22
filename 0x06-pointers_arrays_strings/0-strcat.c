#include "main.h"
/**
 * _strcat - concatenates
 * @dest : destination
 * @src : source
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int n = 0, i;
	while (dest[dlen])
		n++;
	for (i = 0; src[i] != 0; i++)
	{
		dest[n] = src[i];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
