/**
 * check_array - checks if the entire array is in order
 * @array: the array in question
 * Return: -1 if it is in order.
 * index of flaw [x] otherwise.
 */

#include "sort.h"

int check_array(int *array, int size, int startAt)
{ /*startAt is necessary because of bubble sort's particulars*/
	int x;

	for (x = startAt; x < size - 1; x++)
	{ /*as long as there is a next to compare to*/
		if (array[x] > array[x + 1])/*there are items out of order*/
			return (x);/*return where it is out of order with next*/
	}
	return (check_whole_array(array, size));/*no violations after startAt*/
	/*so check for any violations starting from beginning*/
}

int check_whole_array(int *array, int size)
{ /*this just checks the whole array and returns where a problem is*/
  int x;

  for (x = 0; x < size - 1; x++)
    { /*as long as there is a next to compare to*/
      if (array[x] > array[x + 1])/*there are items out of order*/
	return (x);/*return where it is out of order with next*/
    }
  return (-1);/*got through with no violations*/
}

