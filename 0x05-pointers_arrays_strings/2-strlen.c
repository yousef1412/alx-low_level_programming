#include "main.h"
/**
 * _sterlen - return the length of the string
 *
 * @s: string parameter input
 *
 * return: then length of the string
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);	
}
