#include "main.h"
/**
 * rev_string - reverses & string
 *
 * @s sring parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{	
	int l, i;
	char temp;

	/*find string length without null char*/
	for (l = 0; s[1] != '\0'; ++l)

	/*swap the string by looping to the half string*/
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i]; /*-1 becuase the arrays starts with 0*/
		s[l - 1 - i] = temp;

	}
}	
