#include "lists.h"

/**
* delete_nodeint_at_index - deletes a node in a linked list at a certain index
* @head: pointer to the first element in the list
* @index: index of the node to delete
* Return: 1 (Success), or -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
listint_t *node;
unsigned int i = 0;

if (*head == NULL)
return (-1);

current = *head;
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}

while (i < index - 1)
{
if (current == NULL || current->next == NULL)
return (-1);
current = current->next;
i++;
}

node = current->next;
current->next = node->next;
free(node);

return (1);
}
