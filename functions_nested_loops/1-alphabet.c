#include "main.h"
#include <stdio.h>
/**
 * print_alphabet- print alphabet
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
