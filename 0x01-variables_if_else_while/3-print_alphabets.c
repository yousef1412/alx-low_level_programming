#include <stdio.h>
/**
 * main - putchar to print alphabet
 * Decription: Prints alphabet in lowercase
 * Return: 0
 */
int main(void)
{
int n;

for (n = 'a'; n <= 'z'; n++)
{
	putchar(n);
}
putchar('\n');
for (n = 'A'; n <= 'Z'; n++)
{
	putchar(n);
}
return (0);
}
