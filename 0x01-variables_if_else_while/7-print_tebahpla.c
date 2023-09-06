#include <stdio.h>
/**
 * main - putchar to print alphabet
 * Decription: Prints alphabet in reverse lowercase
 * Return: 0
*/
int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
	putchar(n);
	}
	putchar('\n');
	return (0);
}
