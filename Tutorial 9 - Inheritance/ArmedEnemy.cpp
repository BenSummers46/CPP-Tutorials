#include <iostream>

#include "ArmedEnemy.h"

ArmedEnemy::ArmedEnemy(float Health, int Ammo) : Enemy(Health), m_AmmoLevel(Ammo) {

}

ArmedEnemy::~ArmedEnemy() {

}

void ArmedEnemy::SetScore(const int Score) {
	*m_Score = Score;

	std::cout << "Score is now: " << *m_Score << std::endl;
}

void ArmedEnemy::Shoot() {
	if (m_AmmoLevel > 0) {
		std::cout << "Gun Shot!" << std::endl;
		--m_AmmoLevel;
	}
	else {
		std::cout << "Out of ammo!" << std::endl;
	}
}

void ArmedEnemy::Update(float DeltaTime) {
	/*
	* Logic that would happen every frame.
	*/

	if (m_Damage > 100.0f) {
		m_Health -= 2;
	}
}
