#include <stdio.h>
/**
 *main - Entry point
 *description: "print all possible combinations of single-digit numbers"
 *Return: Always 0
 */

int main(void)
{
	for (int a = 48; a <= 57; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
