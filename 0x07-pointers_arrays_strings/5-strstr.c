#include "main.h"
/**
 * _strstr - finds the first occurrence
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
	char *b, *p;

	while (*haystack != '\0')
	{
		b = haystack;
		p = needle;
		while (*haystack != '\0' && *p != '\0' && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (bhaystack);
		haystack = b + 1;
	}
	return (0);
}
