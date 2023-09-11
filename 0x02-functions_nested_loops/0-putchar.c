#include <stdio.h>
/**
 * main - main block
 * Return: 0
*/
int main(void)
{
char str[10] = "_putchar";
int i;

for (i = 0; i < 8; i++)
{
	putchar(str[i]);
}
putchar('\n');
return (0);
}
