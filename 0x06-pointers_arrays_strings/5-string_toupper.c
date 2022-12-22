#include "main.h"
/**
 * string_toupper - to upper case
 * @a : string
 * Return: string
*/
char *string_toupper(char *a)
{
	int i;
	char *b;

	i = 0;
	b = a;
	while (b[i])
	{
		if (b[i] >= 97 && b[i] <= 122)
			b[i] = b[i] - 32;
		i++;
	}
	return (b);
}
