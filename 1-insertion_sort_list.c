/**
 * insertion_sort_list - insertion sorts an array
 * if array[x]>array[x+1,], swap their values
 * @array: the array in question
 * @size: size of araay
 *
 * Return: nada
 */

#include "sort.h"
#include "check_dbl_linked_list.c"

void insertion_sort_list(listint_t **list)
{
	int i;

	i = check_list(list);
/*	printf("check_list returned %i\n", i);*/
	while (i >= 0)
	{
		i = check_list(list);/*i = index of problem*/
//		printf("check_list returned %i\n", i);
		if (i > 0)//if there is actually a problem node
		{
			move_node(list, i, i - 1);/*move problem 1 to the left*/
			print_list(*list);
		}
	}

}

