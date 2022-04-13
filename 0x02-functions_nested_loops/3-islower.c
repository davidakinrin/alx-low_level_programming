#include "main.h"

/**
 * _islower - checks if character is a lowercase
 * @c: The charcter to be checked.
 *
 * Return: 1 if charcter is lowercase, 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 'a'&& c<= 'z')
		return (1);
	else
		return (0);
}
