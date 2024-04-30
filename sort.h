#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* PROTOTYPES */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap_list(listint_t *prev_node, listint_t *temp,
listint_t *next, listint_t **h);
void swap_int(int *a, int *b);
void divide(int beg, int pivot, int *i, size_t size);
int partition(int beg, int pivot, int *i, size_t size);
void swap_int(int *a, int *b);
void swapme(listint_t *current, listint_t *current_old, listint_t **list)

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);


#endif /* SORT_H */
