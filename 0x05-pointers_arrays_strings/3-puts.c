#include "main.h"

/**
 * _puts - prints a string, follwed by a new line for stdout
 *
 * @str: srting parameter to print
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
