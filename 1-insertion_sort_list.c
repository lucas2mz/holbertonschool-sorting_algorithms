#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *current, *temp;
	
	current = (*list)->next;

	while (current != NULL)
	{
		aux = current->prev;
		while (aux != NULL && aux->n > current->n)
		{
			temp = current->next;

			if (current->next != NULL)
			{
				
			}
		}
	}
}
