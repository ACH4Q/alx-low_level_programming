#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * @head: Pointer
 * @idx: Index
 * @n: Integer
 * Return: Address of the newly inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *harruma = *head;
	listint_t *ACH4Qmallocer = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!ACH4Qmallocer)
		return (NULL);

	ACH4Qmallocer->n = n;
	ACH4Qmallocer->next = NULL;

	if (idx == 0)
	{
		ACH4Qmallocer->next = *head;
		*head = ACH4Qmallocer;
		return (ACH4Qmallocer);
	}

	while (harruma)
	{
		if (x == idx - 1)
		{
			ACH4Qmallocer->next = harruma->next;
			harruma->next = ACH4Qmallocer;
			return (ACH4Qmallocer);
		}
		x++;
		harruma = harruma->next;
	}

	free(ACH4Qmallocer);
	return (NULL);
}
