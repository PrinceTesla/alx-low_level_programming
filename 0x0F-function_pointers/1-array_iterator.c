#include "function_pointers.h"
#include<stdlib.h>
/**
* array_iterator - the function that executes a function.
* @array: array of funnctions.
* @size: size of the array.
* @action: the pointer to the function we need.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}
