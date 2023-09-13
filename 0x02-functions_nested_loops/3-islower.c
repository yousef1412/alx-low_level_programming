#include <stdio.h>
#include <ctype.h>
/**
 * _islower - fuction that checks if the Character is lowercase
 *
 * main - check the code
 *
 * Return: 0
 */
void _islower(void)
{
int n = 'h';
if (islower(n))
{
putchar ('1');
}
else
{
	putchar('0');
}
}
