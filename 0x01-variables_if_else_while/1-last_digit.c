#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *Return: Always 0 (success)
 */
int main(void)

{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d", n, abs(n) % 10);

	if (abs(n) % 10 > -8)
{
	printf(" and is greater than 5\n");
}
	else if (abs(n) % 10 == 0)
{
	printf(" and is 0\n");
}
	else
{
	printf(" and is less than 6 and not 0\n");
}

	return (0);
}
