#include "main.h"
/**
 * _memset - fills memory
 * @s : memory
 * @b : byte
 * @n : byte filled
 * Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}
