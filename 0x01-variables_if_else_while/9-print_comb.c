#include <stdio.h>
/**
 * main - to print the number followed with a ; and a space
 * Return: 0
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
	putchar (n + '0');
	putchar (';');
	putchar (' ');
}
putchar ('\n');
return (0);
}
