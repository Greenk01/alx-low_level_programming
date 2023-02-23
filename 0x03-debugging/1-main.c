#include <stdio.h>

/**
 * main - Causes of infinite loops and how to fix them
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	/*
	 * while (i < 10)
	 * {
	 * putchar(i);
	 * }
	 */

	printf("Infinit loop avoided! \\o/\n");

	return (0);
}
