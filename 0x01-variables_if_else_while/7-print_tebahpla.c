#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using main function
 * this program prints "Programming is positive, zero or negative"
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
