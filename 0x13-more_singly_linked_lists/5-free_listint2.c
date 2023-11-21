#include "lists.h"
/**
 * free_listint2 - free the linked list
 * @head : pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tofree;

	if (head == NULL)
		return;

	while (*head)
	{
		tofree = *head;
		*head = (*head)->next;
		free(tofree);
	}
	head = NULL;
}
