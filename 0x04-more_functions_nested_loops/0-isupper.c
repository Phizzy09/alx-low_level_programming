#include <unistd.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int _putchar(char c)

{
	return write(1, &c, 1);
}

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
	return 1; // The character is uppercase
	}
	else
	{
	return 0; // The character is not uppercase
	}
}

int main(void)

{
	char character = 'A';

	if (_isupper(character))
	{
	_putchar(character);
	_putchar(' ');
	_putchar('i');
	_putchar('s');
	_putchar(' ');
	_putchar('uppercase');
	_putchar('\n');
	}
	else
	{
	_putchar(character);
	_putchar(' ');
	_putchar('i');
	_putchar('s');
	_putchar(' ');
	_putchar('not');
	_putchar(' ');
	_putchar('uppercase');
	_putchar('\n');
	}

	return 0;
}
