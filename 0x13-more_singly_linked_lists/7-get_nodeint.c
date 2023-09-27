#include "lists.h"

/**
 * get_nodeint_at_index - Returns
 * @head: Pointer
 * @index: Index
 * Return: Pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *harr = head;
	unsigned int i = 0;

	while (harr)
	{
		if (i == index)
			return (harr);
		i++;
		harr = harr->next;
	}

	return (NULL);
}
