#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - function that prints alpha bets 10 times
 *
 * main - check the code
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int n;
int c = 0;
while (c++ <= 9)
{
	for (n = 'a'; n <= 'z'; n++)
	{
	putchar(n);
	}
putchar('\n');
}
}
