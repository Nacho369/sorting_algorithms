#include "sort.h"


/**
 * insertion_sort_list - sorts list with insertion sort
 *
 * @list: input list to sort
 *
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *prev_node, *next;

	if (list && *list && (*list)->next)
	{
		temp = (*list)->next;
		prev_node = temp->prev;
		next = temp->next;

		while (temp)
		{
			if (temp->n < prev_node->n)
			{
				swap_list(prev_node, temp, next, list);
			}

			temp = next;

			if (temp)
			{
				next = temp->next;
				prev_node = temp->prev;
			}
		}
	}
}

/**
 * swap_list - swaps the position of two nodes in a linked list
 *
 * @prev_node: previous node
 * @temp: temp
 * @next: next node
 * @h: head of list
 *
 * Return: Void
 */
void swap_list(listint_t *prev_node, listint_t *temp,
listint_t *next, listint_t **h)
{

	while (prev_node && temp->n < prev_node->n)
	{
		if (next)
			next->prev = prev_node;

		temp->next = prev_node;
		temp->prev = prev_node->prev;

		if (prev_node->prev)
			(prev_node->prev)->next = temp;

		prev_node->prev = temp;
		prev_node->next = next;
		next = prev_node;
		prev_node = temp->prev;

		if ((*h)->prev)
			*h = (*h)->prev;

		print_list(*h);
	}
}
