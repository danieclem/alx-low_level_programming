#include <stdio.h>
/**
 * main - Entry point for program
 *
 * Description: Print all ints followed by ', '
 * Using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	if (i == 57)
	continue;
	putchar(44);
	putchar(32);
	}
	putchar(10);
	return (0);
}
