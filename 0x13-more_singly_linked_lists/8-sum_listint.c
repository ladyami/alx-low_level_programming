#include "lists.h"

/**
* sum_listint - calculates the sum of all the data in a listint_t list
* @head: first node in the linked list
*
* Return: resulting count
*/
int sum_listint(listint_t *head)
{
int count = 0;
listint_t *current = head;

while (current)
{
count += current->n;
current = current->next;
}

return (count);
}
