#include "main.h"


/**
 * main - Entry point
 *
 * Description: number that mod 3 print fizz , mod 5 buzz , mod 3 & 5 fizz buzz
 *
 * Return: Always 0
*/

int main(void)
{
	int n;

	for (n = 1 ; n < 101; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz\n");
		else if (!(n % 3 == 0) && n % 5 == 0)
			printf("Buzz\n");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz\n");
		else
			printf("%d\n", n);

		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
i}
