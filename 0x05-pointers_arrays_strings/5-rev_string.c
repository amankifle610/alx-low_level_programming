#include "main.h"
#include <string.h>
/**
 * rev_string - reverse
 * @s : string
 * Return:
*/
void rev_string(char *s)
{
	int x = strlen(s);
	char *st,*std,temp;

	std = s;
	st = std + x - 1;
	while (std <= st)
	{
		temp = *std;
		*std = *st;
		*st = temp;
		std++;
		st--;
	}
}
