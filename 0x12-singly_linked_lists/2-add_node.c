#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the linked list
 * @str: string to put in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
