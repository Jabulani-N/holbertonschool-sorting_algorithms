/**
 * bubble_sort - bubble sorts an array
 * if array[x]>array[x+1,], swap their values
 */

#include "header.h"
#include "check_array.c"

void bubble_sort(int *array, size_t size)
{
	int bigger, smaller, problemChild;

	problemChild = check_array(array);
	/*initial array check so loop is only entered if needed*/

	if (problemChild == -1)/*applies if it started right.*/
		print_array(array, size);/*becuase we spawned in done*/
	while (problemChild >= 0)
	{ /*while array is out of order*/
		bigger = array[problemChild];
		smaller = array[problemChild + 1];
		/*values stored*/
		array[problemChild] = smaller;
		array[problemChild + 1] = bigger;
		/*values fixed*/
		problemChild = check_array(array);
		/*check next spot*/
		print_array(array, size);
	}

}
