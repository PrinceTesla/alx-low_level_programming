#include<stdio.h>
/**
* print_to_98 - prints integers to 98 from any number passed as argument
*
* @n: the integer argument/parameter
*
* Return: the numbers
*/
void print_to_98(int n)
{
if (n < 98)
{
while (n != 98)
{
printf("%d, ", n);
n++;
if (n == 98)
{
printf("%d\n", n);
}
}
}
else if (n == 98)
{
printf("%d\n", n);
}
else
{
while (n != 98)
{
printf("%d, ", n);
n--;
if (n == 98)
{
printf("%d\n", n);
}
}
}
}
