#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char low;

	for (num = 0; num < 10; num++)
		putchar(num);

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);

	putchar('\n');

	return (0);
}
