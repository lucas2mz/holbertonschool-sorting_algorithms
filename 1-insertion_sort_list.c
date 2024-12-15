#include "sort.h"
/**
 * insertion_sort_list - Sort a list with insertion sort
 * @list: The list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *current, *temp;

	if (list == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		aux = current->prev;
		temp = current->next;
		while (aux != NULL && aux->n > current->n)
		{
			temp = current->next;

			if (current->next != NULL)
				current->next->prev = current->prev;

			if (current->prev != NULL)
				current->prev->next = current->next;

			current->next = aux;
			current->prev = aux->prev;

			if (aux->prev != NULL)
				aux->prev->next = current;
			else
			{
				*list = current;
			}

			aux->prev = current;
			aux = current->prev;
			print_list(*list);
		}
		current = temp;
	}
}
