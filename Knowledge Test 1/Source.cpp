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
* a) Given the following class for a ListElement for a doubly-linked list of nodes each containing a single char, as well as reference to the previous and next nodes, write the implementation of the InsertAfter() function.
*	 Assume the new element has just been constructed and that the insertion position is a valid element.
*	 You should consider what happens if you insert in the middle or at the end of the list.
* 
*	  If you are stuck please research what a doubly-linked list is to get an understanding of how it works.
* 
*/

class ListElement {
public:
	ListElement(char cData) :
		m_cData(cData),
		m_Prev(0),
		m_Next(0) { }

	static void InsertAfter(ListElement* ElementToInsert, ListElement* InsertionPosition);

private:
	char m_cData;
	ListElement* m_Prev;
	ListElement* m_Next;
};

void ListElement::InsertAfter(ListElement* ElementToInsert, ListElement* InsertionPosition) {

}

/* Question 3
* 
*  For each of the functions below, briefly explain what they are doing and rename the functions accordingly.
* 
* a)
* b)
* c)
* 
*/

bool Function1(int Num) {
	bool b = (Num % 2) == 0;
	return b;
}

float Function2(int Array[], int size) {
	int ReturnValue = 0;
	for (int i = 0; i < size; ++i) {
		ReturnValue += Array[i];
	}

	return ReturnValue / size;
}

int Function3(int n) {
	if ((n == 0) || (n == 1)) {
		return n;
	}
	else {
		return (Function3(n - 1) + Function3(n - 2));
	}
}

///////////////////////////////////////////////////////////////////////////////////

int main() {

	SortArrayTestFunction();

	
	return 0;
}