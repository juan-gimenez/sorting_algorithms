#include "sort.h"
#include "swap.c"

/**
 * bubble_sort - Bubble sort
 * @array: array of int
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
size_t x = 0, y = 0;

for (x = 0; x < size; x++)
{
for (y = 0; y < ((size - x) - 1); y++)
{
if (array[y] > array[y + 1])
{
swap(array, y, y + 1);
print_array(array, size);
}
}
}
}
