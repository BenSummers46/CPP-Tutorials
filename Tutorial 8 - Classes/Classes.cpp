#include <iostream>

#include "Enemy.h"

int main() {
	Enemy Enemy1 = Enemy(100, 50);
	std::cout << Enemy1.GetCurrentHealth() << std::endl;

	Enemy* Enemy2 = new Enemy(200, 150);
	Enemy2->SetScore(25);
	std::cout << Enemy2->GetCurrentScore() << std::endl;

	delete Enemy2;
	Enemy2 = nullptr;
	
	return 0;
}