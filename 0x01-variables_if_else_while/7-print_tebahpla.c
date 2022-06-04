#include <stdio.h>

/**
 * *main -> assign a random number to the variable n each time it is executed
 * *based a condition
 * *Return: Always 0 (SUCCESS)
 * **/
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
