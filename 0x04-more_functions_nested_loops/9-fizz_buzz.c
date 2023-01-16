#include <stdio.h>

/**
* main - entry block
* @void: no argument
* Return: 0 Success
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i += 1)
	{
		if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else if (((i % 3) == 0) && ((i % 5) == 0))
			printf("Fizzbuzz");
		else
			printf("%d", i);
		putchar(' ');
	}
	putchar(10);
	return (0);
}
