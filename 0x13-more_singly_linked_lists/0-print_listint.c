#include "lists.h"

/**
* print_elements - prints all the elements of a linked list
* @head: linked list of type listint_t to print
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t count = 0;

while (head)
{
printf("%d\n", head->n);
count++;
head = head->next;
}

return (count);
}
