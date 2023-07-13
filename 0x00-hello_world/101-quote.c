#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: print by using write built-in function
 *
 * Return: 1 (error)
*/

int main(void)
{
char stt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(1, stt, 70);

return (1);
}

