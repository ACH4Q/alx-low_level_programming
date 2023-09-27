#include "lists.h"

/**
 * listint_len - Counts the number of elements
 * @h: Pointer to the head of the list.
 * Return: int
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *haruma = h;
	int count = 0;

	while (haruma)
	{
		haruma = haruma->next;
		count++;
	}

	return (count);
}
