#include"main.h"
/**
* print_alphabet_x10 - lowercase 10x
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int i;
int num;
num = 0;
while (num < 10)
{
for (i = 97 ; i <= 122 ; i++)
{
_putchar(i);
}
num++;
}
}
