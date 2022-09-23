#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: first string
 * @src: string to copy
 * @n: where to paste in dest
 * Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, rem, j;

	i = 0;
	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	
	return dest;
}
