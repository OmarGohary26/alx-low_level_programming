#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: use sizeof to get the size of the types then print it
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
    printf("Size of char: %lu byte\n", sizeof(char));
    printf("Size of short: %lu byte\n", sizeof(short));
    printf("Size of int: %lu byte\n", sizeof(int));
    printf("Size of long: %lu byte\n", sizeof(long));
    printf("Size of long long: %lu byte\n", sizeof(long long));
    printf("Size of float: %lu byte\n", sizeof(float));
    printf("Size of double: %lu byte\n", sizeof(double));
    printf("Size of long double: %lu byte\n", sizeof(long double));
    return (0);
}
