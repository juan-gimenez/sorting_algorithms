#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, x;
int swap;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
x = i;
for (j = i + 1; j < size; j++)
{
if (array[x] > array[j])
{
x = j;
}
}
if (x != i)
{
swap = array[i];
array[i] = array[x];
array[x] = swap;
print_array(array, size);
}
}
}
