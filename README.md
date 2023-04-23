# Sorting Algorithms

## Task 0: Bubble Sort

<p align="center">

  <img src="https://upload.wikimedia.org/wikipedia/commons/c/c8/Bubble-sort-example-300px.gif" width="400\"/>

<br>

O(n^2)

[Bubble Sort](https://en.wikipedia.org/wiki/Bubble_sort) goes through the list item by item, and switching the current pair if they are out of order.

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

[Insertion Sort](https://en.wikipedia.org/wiki/Insertion_sort) is extremely similar to bubble sort.

The difference is, instead of the "bubble" continuing on to the end of the array, insertion repeatedly moves the same item until it is in position.

practically, this just means that each step for sorting, in my code, will start from the beginning of the sequence, and move the first disorder it encounters. repeat.


# Task 2: Selection Sort

<p align="left">

  <img src="https://upload.wikimedia.org/wikipedia/commons/9/94/Selection-Sort-Animation.gif" width="400\"/>

<br>

O(n^2)

Selectin Sort begins a loop:

1. record starting point of

	* iteration 1: 0

	* iteration 2+: previous starting point + 1

1. travel through the entire list

	* mark lowest number encountered this loop

1. reach end of list

1. swap marked lowest number encountered this loop with the content of starting point

This may be approached by a swap function, that recieves an array of ints

1. records the contents of the indices to swap

1. places the contents into the requested indices

1. returns the editied array
