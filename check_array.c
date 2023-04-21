/**
 * check_array - checks if the entire array is in order
 * @array: the array in question
 * Return: -1 if it is in order.
 * index of flaw [x] otherwise.
 */

#include "sort.h"

int check_array(int *array, int size)
{
	int x;

	for (x = 0; x + 1 < size; x++)
	{ /*as long as there is a next to compare to*/
		if (array[x] > array[x + 1])/*there are items out of order*/
			return (x);/*fail one fails all. return immediately*/
	}
	return (-1);/*got through with no violations*/
}
