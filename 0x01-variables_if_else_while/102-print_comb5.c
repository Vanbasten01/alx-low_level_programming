#include <stdio.h>
/**
 *main - Entry point
 *Description: " print all possible combinations of two two-digit numbers"
 *Return: Always 0
 */
int main(void)
{
	int a; /*the first 2 digits*/
	int b; /*the second 2 digits*/
	int a1; /*the first digit of 'a'*/
	int a2; /*the second digit of 'a'*/
	int b1; /*the first digit of 'b'*/
	int b2; /*the second digit of 'b'*/

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			a1 = a / 10;
			a2 = a % 10;
			b1 = b / 10;
			b2 = b % 10;

			putchar(a1 + '0');
			putchar(a2 + '0');
			putchar(' ');
			putchar(b1 + '0');
			putchar(b2 + '0');
			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
