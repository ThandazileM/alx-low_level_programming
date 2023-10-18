#include "main.h"

/**
 * swap_int - swap two intergers
 * @a: value 3
 * @b: value 4
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
