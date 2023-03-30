#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * free_list- adds new node at head
 * @head: pointer to the first element in the link
 * Return: the new head
 */
void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
