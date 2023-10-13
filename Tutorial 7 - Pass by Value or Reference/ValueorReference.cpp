#include <iostream>
#include <vector>
#include <time.h>

void PrintListNums(std::vector<int>& List) {
	for (int& i : List) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
}

void PassByValue(std::vector<int> IntegerList) {
	srand(time(NULL));
	
	for (int& i : IntegerList) {
		i = rand() % 1000 + 1;
	}
}

void PassByReference(std::vector<int>& IntegerList) {
	srand(time(NULL));

	for (int& i : IntegerList) {
		i = rand() % 1000 + 1;
	}
}

void SwapValue(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void SwapReference(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	std::vector<int> ListofNums = { 4, 5, 45, -5, 2, 100, 56 };
	PrintListNums(ListofNums);

	PassByValue(ListofNums);
	PrintListNums(ListofNums);

	PassByReference(ListofNums);
	PrintListNums(ListofNums);

	//////////////////////////////////////////////

	int x = 25;
	int y = 50;
	
	SwapValue(x, y);
	std::cout << x << " " << y << std::endl;

	SwapReference(x, y);
	std::cout << x << " " << y << std::endl;
}