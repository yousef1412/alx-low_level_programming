#include <stdio.h>
/**
 * main - to print the number followed by a , and a space
 * Return: 0
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
	putchar (n + '0');
	if (n != 9)
	{
	putchar (',');
	putchar (' ');
	}
	else
	{
	putchar ('\n');
	}
}
return (0);
}
