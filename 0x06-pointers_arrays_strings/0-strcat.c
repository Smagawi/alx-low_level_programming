#include "main.h"
/**
 * _strcat - concatinates two strings
 * @src: - string to be appended to the des string
 * @dest: - string that src appends to
 * Return: 0.
 *
 */
char *_strcat(char *dest, char *src);
{
	size_t dest_len = strlen(dest);

	for (int i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + 1] = src[i];
	}

	dest[dest_len = strlen(src)] = '\0';

	return (0);
}
