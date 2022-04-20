#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an input number of element of an array of integers.
 * @a: The array of integers.
 * @n: the number of elemnts to be printed
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
