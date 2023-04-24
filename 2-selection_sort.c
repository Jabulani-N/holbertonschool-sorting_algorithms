
/**
 * selection_sort - puts the smallest unsorted value after the sorted values
 * @array: array of unsorted values
 * @size: size of array
 * Return: all the donations of the Hakurei Shrine
 */

void selection_sort(int *array, size_t size)
{
	int startHere = 0, lowest = INT_MAX, i = 0;

	while(check_whole_array(array) != (-1))
	{ /*while array is out of order*/
		while(array[startHere + i])
		{ /*go through the array*/
			if (array[startHere + i] < lowest)
				lowest = (startHere + i);/*lowest = index of current lowest item*/
			i++;
		}
		/*in this section, swap the contents of startHere and lowest*/
		if (lowest != INT_MAX)/*failsafe conditional. don't let it distract you*/
			seija_k_array(array, startHere, lowest);
		/*swapped array[startHere] and array[lowest]*/
		startHere++;/*go through array starting at next slot next time*/
		i = 0; /*reset i to 0 for next loop of going through array*/
	}
}
/**
 * seija_k_array - inverts indices of a and b in array
 * @array: array in question
 * @a: index 1
 * @b: index 2
 * Return: a bit less than my chances of beating this boss
 */

void seija_k_array(int *array, int a, int b)
{
	int oldB, oldA;

	oldB = array[b], oldA = array[a];
	/*recorded contents*/
	array[a] = oldB;
	array[b] = oldA;
	/*replaced the contents*/	
}

