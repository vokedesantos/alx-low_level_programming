#include "main.h"
/**
 * print_alphabelt - print all alphabelt in lowercase
 */
void print_alphabelt(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('/n');
}
