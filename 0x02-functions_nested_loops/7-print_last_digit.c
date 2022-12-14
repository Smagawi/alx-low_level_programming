#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 *
 */

int print_last_digit(int n)
{
	int lk = n % 10;

	if (lk < 0)
	{
		lk *= -1;
	}

	_putchar(lk + '0');

	return (n);
}

