#include "sort.h"
/**
 * bubble_sort - bubble sort algorithm.
 * @array: array to sort.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
int y = size - 1, i, tmp;
char loop;
if (size < 2)
return;
do {
loop = 0;
for (i = 0; i < y; i++)
{
if (array[i] > array[i + 1])
{
tmp = array[i + 1];
array[i + 1] = array[i];
array[i] = tmp;
loop = 1;
print_array(array, size);
}
}
y -= 1;
} while (loop);
}
