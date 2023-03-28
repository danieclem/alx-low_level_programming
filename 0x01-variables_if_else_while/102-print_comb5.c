#include <stdio.h>
/**
 * main - Entry function for program
 *
 * Description: Print '00', '01'..'99'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, q;

	for (i = 48; i < 58; i++)
	{
		for (q = 48; q < 58; q++)
		{
			putchar(i);
			putchar(q);
			if (i == 57 && q == 57)
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
