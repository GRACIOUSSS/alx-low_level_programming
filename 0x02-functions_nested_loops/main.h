#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always zero (success)
 */
int main(void)
{
	char *sh = "stdio.h";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
