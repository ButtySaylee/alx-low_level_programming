#include <stdio.h>
#include <unistd.h>

/**
 * main - print exactly "and that piece of art is useful"
 *      - Dora Korpar, 2015-10-19
 * followed by the newline to the standard error
 * Return: always 0 on (success)
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
