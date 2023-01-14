#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: is the character
 * Return: 1 if character is a letter , 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65) && (c <= 122))
		return (1);
	else
		return (0);
}
