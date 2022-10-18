#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * return: always  0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
