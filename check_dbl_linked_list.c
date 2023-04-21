#include "sort.h"

/**
 * check_list - checks if the entire linked list is in order
 * @list: the array in question
 * Return: -1 if it is in order.
 * index of flaw [x] otherwise.
 */

/*
 * when we reorder, we just tell move_node to move it one backwards
 * needed because the requested function is single steps at a time
 */

int check_list (listint_t **list)
{
	int prevN, index = 0;
	listint_t *holder;

	holder = *list; /*holder = address of current node*/
	while (holder)
	{
/*		printf("check_list is looking at index %i\n", index);*/
		prevN = holder->n;
		holder++;
		index++;
		if (holder)
		{ /*if there actualy was a next spot*/
			if (prevN > holder->n) /*if out of order*/
				return (index);
		}
	} /*if you make it out of the loop, there were no problems*/

	return (-1);
}

/*
 * 1, if im not moving the tail, join my own previous and next
 * 2, find destination
 * 3, change my own prev/next to fit into dest
 * 4, change prev's next to be me
 * 5, change next's prev to be me 
 */

/**
 * move_node - moves node to a given index of doubly linked list
 * @node: the node we will move
 * @dest: the index of the destination we move node to
 * Return: the address of moved node.
 */

listint_t *move_node(listint_t *node, int dest)
{
	listint_t *holder;
	int i = 0;

	if (node->next)
	{ /*if i'm not the tail*/
		holder = node->prev;
		holder->next = node->next;
		holder = node->next;
		holder->prev = node->prev;
	}/*1 joined the nodes that surrouned original node*/

	holder = node;/*holds the address of a node in list*/
	while (holder->prev)/*while there is a node before*/
		holder = holder->prev;/*hold address of previous node*/
	/*holder has address of head of list*/
	while (i < dest)
	{
		holder = holder->next;
		i++;
	} /*2 holder has address of node that was originaly at destination*/
	node->prev = holder->prev;
	node->next = holder;
	/*3 my own next/prev are updated*/
	holder->prev = node;
	holder = node->prev;
	holder->next = node;
	/*4, 5 the surrounging  nodes are updated*/
	return(node);
	

}
