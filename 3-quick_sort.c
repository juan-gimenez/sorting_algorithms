#include "sort.h"
/**
 * quick_sort - function that sorts an array
 * @array: the array
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
QuickSort(array, 0, size - 1, size);
}
/**
 * QuickSort - quick sort alghoritm
 * @array: the array
 * @pos_ini: first position of the array
 * @pos_fin: last position of the array
 * @size: size of array
 */
void QuickSort(int *array, int pos_ini, int pos_fin, size_t size)
{
int pivot = pos_fin;
int y = pos_ini, x = pos_ini - 1;
int aux;

if (!array || pos_fin == -1)
return;
if (array[pos_ini] == array[pivot])
return;

for (; y < pos_fin; y++)
{
if (array[y] < array[pivot])
{
x++;
if (array[y] < array[x])
{
aux = array[x];
array[x] = array[y];
array[y] = aux;
print_array(array, size);
}
}
}
x++;
if (array[x] > array[pivot])
{
aux = array[x];
array[x] = array[pivot];
array[pivot] = aux;
print_array(array, size);
}
if (pos_ini <= x - 1)
QuickSort(array, pos_ini, x - 1, size);
if (x + 1 <= pos_fin)
QuickSort(array, x + 1, pos_fin, size);
}
