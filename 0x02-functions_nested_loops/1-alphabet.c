#include <unistd.h>
/**
 * _putchar - Writes a character to the standard output.
 *
 * @c: The character to be written.
 *
 * Return: On success 1, on error -1.
 */
	void _putchar(char c)
{
	/* Implementation of _putchar */
	write(1, &c, 1);
}

	void print_alphabet(void);
{
	char letter = 'a';

	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
}
