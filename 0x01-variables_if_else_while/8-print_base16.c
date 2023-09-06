#include <stdio.h>
/**
 * main - main block
 * Return: 0
*/
int main(void)
{
int n;
int s;
for (n = 0; n <= 9; n++)
	{
	putchar(n + '0');
	}
for (s = 'a'; s <= 'f'; s++)
	{
	putchar(s);
	}
putchar('\n');
return (0);
}
