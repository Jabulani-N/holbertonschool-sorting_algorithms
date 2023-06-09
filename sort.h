
#ifndef SORT_H
#define SORT_H

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

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


int check_array(int *array, int size, int startAt);
int check_whole_array(int *array, int size);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
int check_list(listint_t **list);
listint_t *move_node(listint_t **list, int origin, int dest);
void seija_k_array(int *array, int a, int b);
void selection_sort(int *array, size_t size);

#endif
