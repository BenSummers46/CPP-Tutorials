#include "Enemy.h"

Enemy::Enemy() {
	m_Health = 100.0f;
	m_Damage = 10.0f;

	m_Score = new int(0);
}

Enemy::Enemy(float Health, float Damage) : m_Health(Health), m_Damage(Damage) {
	m_Score = new int(0);
}

Enemy::~Enemy() {
	delete m_Score;
}

float Enemy::GetCurrentHealth() const {
	return m_Health;
}

float Enemy::GetCurrentDamage() const {
	return m_Damage;
}

int Enemy::GetCurrentScore() const {
	return *m_Score;
}

void Enemy::SetNewHealth(float Health) {
	m_Health = Health;
}

void Enemy::SetNewDamage(float Damage) {
	m_Damage = Damage;
}

void Enemy::SetScore(int Score) {
	*m_Score += Score;
}
