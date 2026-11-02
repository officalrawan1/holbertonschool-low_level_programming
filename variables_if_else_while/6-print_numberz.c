#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
		putchar(number + 48);

	putchar(10);

	return (0);
}
