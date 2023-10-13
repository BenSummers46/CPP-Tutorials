#include <iostream>


void MainTask() {

	int a = 1;
	int* p1 = new int(2);

	int** p2 = &p1;

	int** p3 = new int*;
	*p3 = &a;

	/* 1. If you print *p1 to the console what value will be printed?:
	*		std::cout << *p1 << std::endl;
	* 
	* 
	* 
	*/

	/* 2. If you print *p1 and **p2 to the console, will they print the same values?:
	*		std::cout << *p1 << "==" << **p2 << "?" << std::endl;
	* 
	* 
	* 
	*/

	/* 3. If you print &**p3 to the console what will be printed out? (not an exact answer, answer in terms of the other variables):
	*		std::cout << &**p3 << std::endl;
	* 
	* 
	* 
	*/

	/*std::cout << *p1 << std::endl;
	std::cout << *p1 << "==" << **p2 << "?" << std::endl;
	std::cout << &**p3 << std::endl;*/
	
	
	delete p1;
	delete p3;
	p1 = nullptr;
	p3 = nullptr;
}

int main() {
	int a = 5;
	std::cout << "Value in memory location 'a' is " << a << std::endl;
	std::cout << "Address of (reference to) memory location 'a' is " << &a << std::endl;
	
	int* b = &a;
	std::cout << "Value in memory location pointed to by 'b' is " << *b << std::endl;
	std::cout << "Value in memory location 'b' is " << b << std::endl;
	
	std::cout << b << " should be the same as the memory location for a: " << &a << std::endl;
	std::cout << "b is actually stored at memory location " << &b << std::endl;

	int* c = new int(10);
	int** d = &c;
	std::cout << "To get the value of 'c' using 'd' we must derefernce it twice since it a pointer to a pointer(**): " << **d << std::endl;
	
	delete c;
	c = nullptr;
	d = nullptr;

	// MainTask();

	return 0;
}