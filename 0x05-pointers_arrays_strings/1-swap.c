#include "main.h"

/**
 * swap_int - swap variables values
 * @n: pointer 1
 * @m: pointer 2
 * Return: void
 */

void swap_int(int *n, int *m)
{
	*n += *m;
	*m = *n - *m;
	*n = *n - *m;
}
