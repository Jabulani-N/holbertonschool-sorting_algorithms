/**
 * check-array - checks if the entire array is in order
 * @array: the array in question
 * Return: 1 if it is in order. 0 otherwise.
 */

int check-array(int array[])
{
	int x;

	for(x = 0; array[x+1]; x++)
	{ /*as long as there is a next to compare to*/
		if (array[x] > array[x+1])/*there are items out of order*/
			return(0);/*fail one fails all. return immediately*/
	}
	return (1);/*got through with no violations*/
}
