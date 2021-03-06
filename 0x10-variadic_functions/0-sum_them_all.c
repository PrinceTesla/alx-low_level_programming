#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - function that sums all the parameters given to it.
* @n: the first/last known argument.
* Return: the sum or 0 if n == 0.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum = 0;
if (n != 0)
{
va_start(ap, n);
for (i = 0 ; i < n ; i++)
{
sum = sum + va_arg(ap, unsigned int);
va_end(ap);
}
return (sum);
}
return (0);
}
