#include <iostream>
#include <math.h>

const int GlobalNumber = 100;


void IntroToScope() {
	float SumFloat = 0.0f;
	{
		float NewScopeFloat = 5.0f;
		SumFloat = std::pow(NewScopeFloat, 3);
	}
	std::cout << SumFloat << std::endl;
	std::cout << NewScopeFloat << std::endl;
	
	float NewScopeFloat = 10.0f;
	std::cout << NewScopeFloat << std::endl;

	//////////////////////////////////////////////
	
	int LocalNumber = 50;

	if (LocalNumber < GlobalNumber) {
		int IfNumber = 10;

		std::cout << GlobalNumber << std::endl;
	}

	std::cout << IfNumber << std::endl;
	
	/////////////////////////////////////////////

	int a = 100;
	int* b;
	{
		int a = 200;
		std::cout << "The value of a is: " << a << std::endl;

		int* LocalPtr = new int(25);
		b = LocalPtr;
	}
	std::cout << "The new value of a is: " << a << std::endl;
	std::cout << "The value pointed to by b is: " << *b << std::endl;

	delete b;
	b = nullptr;
}

void BrokenScopeFunction() {
	int a = 25;
	int* b = new int(25);
	{
		if (a == *b) {
			for (int i = 0; i < 25; ++i) {
				int sum = sum + i;
			}
			std::cout << sum << std::endl;
			int a = 135;
		}
		else {
			int a = 125;
			*b += a;
			{
				int* b = new int(-1);
			}
		}
	}

	std::cout << *b << std::endl;
}

int main() {
	IntroToScope();


	
	return 0;
}