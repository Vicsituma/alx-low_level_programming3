#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints the numbers 0 to 9,
 * followed by a new line
 * Return: none
*/
void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
		_putchar(i);
	_putchar('\n');
}
