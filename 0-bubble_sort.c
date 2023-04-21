/**
 * bubble_sort - bubble sorts an array
 * if array[x]>array[x+1,], swap their values
 * @array: the array in question
 * @size: size of araay
 *
 * Return: nada
 */

#include "sort.h"
#include "check_array.c"

void bubble_sort(int *array, size_t size)
{
	int bigger, smaller, problemChild, onee = 0;

	if (size < 2)/*don't play if size is bad*/
		return;

	problemChild = check_array(array, size, onee);
	/*initial array check so loop is only entered if needed*/

	while (problemChild >= 0)
	{ /*while array is out of order*/
		bigger = array[problemChild];
		smaller = array[problemChild + 1];
		/*values stored*/
		array[problemChild] = smaller;
		array[problemChild + 1] = bigger;
		/*values fixed*/
		print_array(array, size);/*print newly refurbished array*/
		onee = problemChild;/*onee is the previous child*/
		problemChild = check_array(array, size, onee);
		/*check next spot*/
	}

}

