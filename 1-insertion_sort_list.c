#include "sort.h"

/**
 *insertion_sort_list - sorts a doubly linked list of integers
 *@list: list of numb
 *Return: none
 */
void insertion_sort_list(listint_t **list)
{
listint_t *loop, *y;

if (!list || !(*list) || !(*list)->next)
return;

loop = *list;
while (loop)
{
y = loop;

while (y->prev && y->n < y->prev->n)
{
y->prev->next = y->next;

if (y->next)
{
y->next->prev = y->prev;
}
y->next = y->prev;
y->prev = y->prev->prev;
y->next->prev = y;

if (!y->prev)
*list = y;
else
y->prev->next = y;
print_list(*list);
}
loop = loop->next;
}
}
