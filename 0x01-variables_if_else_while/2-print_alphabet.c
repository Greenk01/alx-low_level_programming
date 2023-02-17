#include <stdio.h>
#include <stdlib.h>

/**
 * main - Returns alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 'a';

	while (ch <= '2')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
