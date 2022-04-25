#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer to array
 * @n: number of elements of an array
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
