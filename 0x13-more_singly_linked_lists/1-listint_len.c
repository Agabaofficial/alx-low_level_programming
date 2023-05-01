#include "lists.h"
/**
 * listint_len - function to return number of elements in linked list
 * @h: pointer to head of linked list
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
