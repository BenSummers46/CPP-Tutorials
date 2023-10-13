#include <iostream>
#include <string>

int FactorialFoorLoop(int x) {
	int FacSum = 0;

	for (int i = 0; i < x; i++) {
		FacSum += i;
	}

	return FacSum;
}

int FactorialWhileLoop(int x) {
	int Index = 0;
	int FacSum = 0;

	while (Index < x) {
		FacSum += Index;
		Index++;
	}

	return FacSum;
}

bool CheckIsEqual(int x, int y) {
	if (x == y) {
		return true;
	}
	else {
		return false;
	}
}

bool TestIfStatement(int age) {
	// Implement function here


	return 0;
}

void FaultyLoop(float x) {
	for (int i = 0; i == x; i++) {
		std::cout << "Hello" << std::endl;
	}

	/* Write answer in this comment:
	* 
	* 
	* 
	* 
	* 
	*/
}

int main() {
	int Number = 25;
	int ForLoopResult = FactorialFoorLoop(Number);
	int WhileLoopResult = FactorialWhileLoop(Number);

	bool IsEqual = CheckIsEqual(ForLoopResult, WhileLoopResult);
	std::cout << IsEqual << std::endl;
	
	return 0;
}