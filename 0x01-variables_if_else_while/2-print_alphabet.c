#include <stdio.h>

/**
 * *main -> assign a random number to the variable n each time it is executed
 * *based a condition
 * *Return: Always 0 (SUCCESS)
 * **/
int main(void)
{
	int ch;
	for (ch = 97; ch <= 122; ch++)
<<<<<<< HEAD

	{
		putchar(ch);
	}
=======
	{
		putchar(ch);
	}
	putchar(ch = 10); /** this is an ascii code for new line **/
>>>>>>> edbb6b3dc98986d74631b576203d881e1509a12b
	return (0);
}

