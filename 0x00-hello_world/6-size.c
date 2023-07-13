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
    printf("Size of char: %lu byte(s)\n", sizeof(char));
    printf("Size of int: %lu byte(s)\n", sizeof(int));
    printf("Size of long int: %ld byte(s)\n", sizeof(long int));
    printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
    printf("Size of float: %lu byte(s)\n", sizeof(float));
    return (0);
}
