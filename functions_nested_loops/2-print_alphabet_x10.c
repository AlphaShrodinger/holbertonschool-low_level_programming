#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10- print alphabet 10 times on lowercase
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
	letter = 'a';
	while (letter <= 'z')
	{
	_putchar (letter);
	letter++;
	}
	_putchar ('\n');
	}
}
