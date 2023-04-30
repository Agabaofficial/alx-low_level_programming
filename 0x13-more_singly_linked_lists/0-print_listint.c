#include "lists.h"
/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		printf("%d\n",  h->n);
		h = h->next;
	}
	return (i);
}
