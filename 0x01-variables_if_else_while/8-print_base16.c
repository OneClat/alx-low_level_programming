#include <stdio.h>

/**
 * *main -> assign a random number to the variable n each time it is executed
 * *based a condition
 * *Return: Always 0 (SUCCESS)
 * **/
int main(void)
{
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}


