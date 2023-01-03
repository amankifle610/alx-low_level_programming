#include "main.h"
/**
 * _strspn - gets the length
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: accapted byte
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, a;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		a = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				a = 0;
				break;
			}
		}
		if (a == 1)
			break;
	}
	return (i);
}
