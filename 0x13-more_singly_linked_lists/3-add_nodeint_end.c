#include "lists.h"

/**
 * add_nodeint_end - function that dds a new node at the end of a listint_t list
 * @head: pointer to first element
 * @n: data to insert in the new element
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *next_node, *last_node;

	if (head == NULL)
		return (NULL);

	next_node = malloc(sizeof(listint_t));
	if (next_node == NULL)
		return (NULL);

	next_node->n = n;
	next_node->next = NULL;

	if (*head == NULL)
	{
		*head = next_node;
		return (next_node);
	}

	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = next_node;

	return (next_node);
}
