#include <stdio.h>
/**
 *main - Entry point
 *Description: "print the alphabet in lowercase, followed by a new line"
 *Return: Always 0
 */
int main(void)
{
	int a = 97;

	while (a <= 122)
	{
		if (a != 101 && a != 113)
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
