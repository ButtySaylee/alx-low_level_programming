#include "main.h"

/**
* main - Printing "_putchar"
* followed by a new line
* Return: Always 0 on (Success)
*/

int main(void)
{
int b;
char p[] = "_putchar";

for (b = 0; b < 8; b++)
{
_putchar(p[b]);
}
_putchar('\n');
return (0);
}
