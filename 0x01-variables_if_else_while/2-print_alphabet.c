#include <stdio.h>

/**
 * main- Entry point
 * Description: Print alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
