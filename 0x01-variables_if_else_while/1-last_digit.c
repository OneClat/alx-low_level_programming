#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * *main -> assign a random number to the variable n each time it is executed
 * *based a condition
 * *Return: Always 0 (SUCCESS)
 * **/
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	printf("Last digit of %d is %d and is ", n, lastDigit);
	if (lastDigit > 5)
	{
		printf("greater than 5");
	}
	if (lastDigit == 0)
	{
		printf("0");
	}
	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("less than 6 and not 0");
	}
	printf("\n");

	return (0);
}

