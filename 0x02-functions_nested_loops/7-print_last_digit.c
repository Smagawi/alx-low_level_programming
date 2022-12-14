#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 *
 */

int print_last_digit(int n)
{
	int j = n % 10;

	if (j < 0)

		j *= -1;

	_putchar(j + '0');

		return (0);
}

