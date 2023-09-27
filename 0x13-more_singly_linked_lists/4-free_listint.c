#include "lists.h"

/**
 * free_listint - Frees
 * @head: Pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ACH4Q = head;
	listint_t *lun = NULL;

	while (ACH4Q)
	{
		lun = ACH4Q->next;
		free(ACH4Q);
		ACH4Q = lun;
	}
}
