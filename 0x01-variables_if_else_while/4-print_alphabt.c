#include <stdio.h>
/**
 * main - main block
 * Return: 0
*/
int main(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
	if ((n == 'e' || n == 'q') != 1)
	{
	putchar(n);
	}
}
putchar ('\n');
return (0);
}
