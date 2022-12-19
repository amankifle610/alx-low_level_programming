#include "main.h"
/**
 * _strlen - length
 * @S - string ponter
 * Return: length of string
*/
int _strlen(char *s)
{
	int c;

	c = 0;
	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
