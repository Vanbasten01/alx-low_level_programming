#include <stdio.h>
/**
 *main - Entry point
 *Description: "prints the alphabet in lowercase, and then in uppercase"
 *Return: Always 0
 */
int main(void)
{
	int a = 65;
	int b = 97;

	while (b <= 122)
	{
		putchar(b);
		b++;
	}
	while (a <= 90)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}

