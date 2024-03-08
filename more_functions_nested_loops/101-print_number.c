#include "main.h"
#include <stdio.h>
/**
 *print_number- prints an integer
 *@n: The integer tor print
 *Return: Nothing
 */
void print_number(int n)
{
	int k = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
		print_number(k);
	_putchar((int) n % 10 + '0');
}
