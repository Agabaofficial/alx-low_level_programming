#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head)
{
	list_t *temp, *next;

	temp = head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp->str);
		free(temp);
		temp = next;
	}
}
