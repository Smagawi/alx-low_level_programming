#include "main.h"

/**
 * _abs - computes the absolute value of an interger
 * @t: the integer to be computed
 * Return: The absolute value
 *
 */

int _abs(int t)
{
	if (t >= 0)
		return (t);

	else if (t <= 0)
		return (-t);
	return (0);
}
