#include <iostream>

#include "Enemy.h"
#include "ArmedEnemy.h"

void SomeFunction(Enemy& NewEnemy) {
	NewEnemy.SetScore(5);
}

int main(void) {
	ArmedEnemy* AE = new ArmedEnemy(100, 5);
	AE->SetNewHealth(50);
	std::cout << AE->GetCurrentHealth() << std::endl;

	AE->Shoot();
	AE->Update(2.2f);

	SomeFunction(*AE);

	delete AE;
	AE = nullptr;

	return 0;
}