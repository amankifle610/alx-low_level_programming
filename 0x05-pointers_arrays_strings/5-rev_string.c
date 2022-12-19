#include "main.h"
#include <string.h>
/**
 * rev_string - reverse
 * @s : string
 * Return:
*/
void rev_string(char *s)
{
	int x = strlen(s),i;
	char st[x];

	s = s + x;
	for (i = 0; i < x; i++)
	{
		st[i] = *s;
		s--;
	}
	s = st;
}
