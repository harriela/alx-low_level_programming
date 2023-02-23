#include "main.h"

/**
 * print_numbers - Print numbers from 0 up to 9
 * Return: nothing on success
 */

void print_numbers(void)

{

	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');

	_putchar('\n');
}
