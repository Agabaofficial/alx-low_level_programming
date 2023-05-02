#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head of the list
 *
 * Description: This function frees a listint_t linked list.
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
