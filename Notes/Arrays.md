# Defination
An array is collection of items stored at continuous memory locations. The idea is to declare multiple items of same type together.

## Array declaration:
 - C/C++

	int arr[10];
	int arr[] = {1,2,3,5,6,3};
	//in C out of bound dont checked whereas in c++ it is checked by compiler

 - Java

In java obtaining an array is a two-step process. First, you must declare a variable of the desired array type. Second, you must allocate the memory that will hold the array, using new, and assign it to the array variable. Thus, in Java all arrays are dynamically allocated.

	int intArray[];	// declaration
	int[] intArray; 
	intArray = new int[4]; 	//memory allocation
	int[] intArray = new int[4];
	int[] intArray = new int[]{ 1,2,3,4,5,6,7,8,9,10 }; // Declaring array literal

## Key Points
1. In C, it is possible to have array of all types except void and functions.

2. In C, array and pointer are different. They seem similar because array name gives address of first element and array elements are accessed using pointer arithmetic.

3. Arrays are always passed as pointer to functions.
4. A character array initialized with double quoted string has last element as ‘\0’.

5. Like other variables, arrays can be allocated memory in any of the three segments, data, heap, and stack. Dynamically allocated arrays are allocated memory on heap, static or global arrays are allocated memory on data segment and local arrays are allocated memory on stack segment.

## Difference between pointer and array in C?
- [link](https://www.geeksforgeeks.org/difference-pointer-array-c/)

