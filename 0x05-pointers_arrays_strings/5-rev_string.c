#include <stdio.h>
#include "main.h"
/**
 * rev_string -
*/

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	while (i)
	{
		_putchar(s[i--]);
	}
}

