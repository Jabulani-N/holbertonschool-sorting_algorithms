# Sorting Algorithms

## Task 0: Bubble Sort

<p align="center">

  <img src="https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif" width="400\"/>

<br>

O(n^2)

Bubble Sort goes through the list item by item, and switching the current pair if they are out of order.

- This process is repeated as many times as necessary to order the list

the function we create wants to

1. move through list.

	* if it finds a faulty order, reorder that, and stop traveling through the list

1. print the current list

	* if there were changes: repeat

	* if there were no changes: end function.


# Task 1: Insertion Sort

<p align="center">

  <img src="https://upload.wikimedia.org/wikipedia/commons/0/0f/Insertion-sort-example-300px.gif" width="400\"/>

<br>

O(n^2)

Insertion sort is extremely similar to bubble sort.

The difference is, instead of the "bubble" continuing on to the end of the array, insertion repeatedly moves the same item until it is in position.

practically, this just means that each step for sorting, in my code, will start from the beginning of the sequence, and move the first disorder it encounters. repeat.



