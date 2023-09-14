#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{
	char character = 'A';

	if (_isupper(character))
	{
	printf("%c is uppercase\n", character);
	}
	else
	{
	printf("%c is not uppercase\n", character);
	}

	return (0);
}
