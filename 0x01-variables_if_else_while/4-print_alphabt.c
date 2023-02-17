#include <stdio.h>

/**
 * main - Prints alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'e' || c != 'q') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
