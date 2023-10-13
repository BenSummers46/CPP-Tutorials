#include <iostream>

void StackVsHeap() {
	// Allocated on the stack once the function is called.
	int a = 100;

	// Allocated on the heap by the programmer.
	int* b = new int;
	std::cout << "The pointer 'b' points to memory address " << b << " stored on the heap." << std::endl;
	std::cout << "The value in memory location b is " << *b << std::endl;
	
	
	// Copying the value of stack value of a into b.
	*b = a;
	std::cout << "Variable 'a' on the stack has the value: " << a << std::endl;
	std::cout << "Variable 'b' on the heap has copied the value " << *b << " from variable a" << std::endl;
	
	
	// b must be manually deleted by the programmer as it is on the heap.
	delete b;
	b = nullptr;
} // Once we leave the scope for variable a it will be automatically free'd.


int main() {
	
	StackVsHeap();
	
	return 0;
}