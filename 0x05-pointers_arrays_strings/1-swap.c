#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * using the two inputs parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
