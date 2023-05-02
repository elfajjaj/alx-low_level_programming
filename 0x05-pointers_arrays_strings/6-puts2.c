#include <stdio.h>

/**
*Swap_int -Swaps the values of two integers.
*@a: The first integer to be swapped.
*@b: The second integer to be swapped.
*
* Return: nothing
*/

void puts2(char *str)
{
int i;
int j = 0;
while (str[j] != '0')
{
j++;
}
for (i = 0; i < j; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
