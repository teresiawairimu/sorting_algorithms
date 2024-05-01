#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 * @list: pointer to pointer list
 * Return: list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *new = NULL;
	listint_t *current = *list;

	while (current != NULL)
	{
		listint_t *next = current->next;
		if (new == NULL || new->n >= current->n)
		{
			current->next = new;
			current->prev = NULL;
			if (new != NULL)
			{
				new->prev = current;
			}
			new = current;
		}
		else
		{	
			listint_t *temp = new;
			while (temp->next != NULL && temp->next->n < current->n)
			{
				temp = temp->next;
			}
			current->next = temp->next;
			current->prev = temp;
			if (temp->next != NULL)
			{
				temp->next->prev = current;
			}
			temp->next = current;
		}
		print_list(new);
		current = next;
	}
	*list = new;
}

