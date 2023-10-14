#include <iostream>

/* Question 1:
* 
* a) Implement the 'SortArray' function to sort an array of integers from largest to smallest without using an standard library functions. I would recommend looking at the bubble sort algorithm.
* b) Modify the function to accept a boolean as a parameter specifying whether to sort the list from smallest to largest or largest to smallest.
* c) Add any additional tests in 'SortArrayTestFunction', you can use 'PrintArray' to print the array to the command line to test that it works.
* 
*/

void SortArray(int Array[], int Size) {

}

void PrintArray(int Array[], int size) {
	for (int i = 0; i < size; ++i){
		std::cout << " " << Array[i];
	}
	std::cout << std::endl;
}

void SortArrayTestFunction() {
	int ArrayTest[6] = { -1, 999, 33, 22, -100, 0 };
	PrintArray(ArrayTest, 6);

	SortArray(ArrayTest, 6);
}

/* Question 2:
* 
* 
*/


int main() {

	SortArrayTestFunction();
	
	return 0;
}